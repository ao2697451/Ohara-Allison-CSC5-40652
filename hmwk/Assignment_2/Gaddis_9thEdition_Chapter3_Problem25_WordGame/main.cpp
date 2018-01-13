/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 3 Problem 25 "Word Game"
 * Allow the user to input different facts, and then make a story out of it
 * Created on January 11, 2018, 2:50 PM
 */

#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables 
    string name, city, college, profession, animal, animalName, age;
    
    //allow user to input 
    cout<<"What is your name? ";
    getline(cin, name);
    
    cout<<"How old are you? ";
    getline(cin, age);
    
    cout<<"Choose a city ";
    getline(cin, city);
    
    cout<<"Choose a college ";
    getline(cin, college);
    
    cout<<"Choose a profession ";
    getline(cin, profession);
    
    cout<<"Choose a type of animal ";
    getline(cin, animal);
    
    cout<<"What is the animal's name? ";
    getline(cin, animalName);
    
    //tell story
    cout<<"\nHere is your story: \n";
    cout<<"There once was a person named "<<name;
    cout<<" who lived in "<<city<<".\n";
    cout<<"At the age of "<<age<<", ";
    cout<<name<<" went to college at ";
    cout<<college<<".\n";
    cout<<name<<" graduated and went to work as a ";
    cout<<profession<<".\n";
    cout<<"Then, "<<name<<" adopted a(n) ";
    cout<<animal<<" named "<<animalName<<".\n";
    cout<<"They both lived happily ever after!";
    
    return 0;
}

