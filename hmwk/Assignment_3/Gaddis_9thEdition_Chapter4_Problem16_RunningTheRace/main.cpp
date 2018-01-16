/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 4 Problem 16 "Running the Race"
 * Get the names of three runners and the times in which they ran the race, then
 * display who got first, second, and third. Only accept positive number inputs.
 * Created on January 15, 2018, 5:07 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    string runner1, runner2, runner3;
    float time1, time2, time3;
    string first, second, third;
    //get user input
    cout<<"Enter the name of the first runner.\n";
    getline(cin, runner1);
    
    cout<<"Enter the time it took the first runner to run the race (in minutes).\n";
    cin>>time1;
    
    cout<<"Enter the name of the second runner.\n";
    cin.ignore();
    getline(cin, runner2);
    
    cout<<"Enter the time it took the second runner to run the race (in minutes).\n";
    cin>>time2;
    
    cout<<"Enter the name of the third runner.\n";
    cin.ignore();
    getline(cin, runner3);
    
    cout<<"Enter the time it took the third runer to run the race (in minutes).\n";
    cin>>time3;
    
    //compare the inputs and find placements
    if (time1>0 && time2>0 && time3>0){
        
        if (time1>time2 && time2>time3){
            first = runner3;
            second = runner2;
            third = runner1;
        }
        else if(time1>time3 &&time3>time2){
            first = runner2;
            second = runner3;
            third = runner1;
        }
        else if (time2>time3 && time3>time1){
            first = runner1;
            second = runner3;
            third = runner2;
        }
        else if (time2>time1 && time1>time3){
            first = runner3;
            second = runner1;
            third = runner2;
        }
        else if (time3>time2 && time2>time1){
            first = runner1;
            second = runner2;
            third = runner3;
        }
        else if (time3>time1 && time1>time2){
            first = runner2;
            second = runner1;
            third = runner3;
        }
        else if (time1==time2 || time2==time3 || time3==time1)
            cout<<"Two of the times are equal; there was a tie.\n";
        
        cout<<"First: "<<first<<endl;
        cout<<"Second: "<<second<<endl;
        cout<<"Third: "<<third<<endl;
    }
    else
        cout<<"Invalid user input. No negative times are possible.";
    
    
                    
    return 0;
}

