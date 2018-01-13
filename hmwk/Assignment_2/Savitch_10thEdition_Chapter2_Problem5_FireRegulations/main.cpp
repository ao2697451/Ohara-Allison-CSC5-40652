/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Savitch 10th Edition Chapter 2 Problem 5
 * Allow user to input maximum room capacity and how many people are in the room
 * and tell them if they are in violation of fire law regulations or not.
 * Repeat program as often as user wishes.
 * Created on January 12, 2018, 12:14 PM
 */

#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char answer;
    int maximumCapacity, peopleInRoom;
    
    do
    {
        cout<<"What is the maximum capacity of the room?\n";
        cin>>maximumCapacity;
        cout<<"How many people are in the room?\n";
        cin>>peopleInRoom;
        if(peopleInRoom > maximumCapacity){
            cout<<"The meeting cannot be held, as the fire regulations say you";
            cout<<" have too many people in the room.\n";
            cout<<"You must exclude "<<peopleInRoom - maximumCapacity;
            cout<<" people from the meeting in order to meet the regulations.\n";
        }
        else if(peopleInRoom<=maximumCapacity){
            cout<<"The meeting is to legal to be held and ";
            cout<<maximumCapacity - peopleInRoom;
            cout<<" more people may legally attend.\n";
        }
        cout<<"Would you like to repeat the program? Press y for yes";
        cout<<"and any other key for no, and then hit enter.\n";
        cin>>answer;
    } while(answer == 'Y' || answer == 'y');
    cout<<"That's all; thank you!";
    return 0;
}

