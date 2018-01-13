/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Savitch 10th Edition Chapter 2 Problem 13
 * Allow user to input information about themselves, and then calculate the
 * number of chocolate bars that they would have to eat to maintain their weight
 * according to the BMR equation.
 * Created on January 12, 2018, 11:53 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    const int CHOCOLATE_BAR = 230; //chocolate bars typically have 230 calories
    float weight, height, age, BMR;
    char gender;
    
    //get user information
    cout<<"What is you weight in pounds?\n";
    cin>>weight;
    
    cout<<"What is your height in inches?\n";
    cin>>height;
    
    cout<<"What is your age in years?\n";
    cin>>age;
    
    cout<<"What is your gender? Enter M for male and F for female.\n";
    cin>>gender;
    
    cout<<fixed<<setprecision(1)<<showpoint;
    
    if(gender == 'F'){
        BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
        cout<<"You should eat "<<BMR / CHOCOLATE_BAR<<" chocolate bars.";
    }
    else if (gender == 'M'){
        BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
        cout<<"You should eat "<<BMR / CHOCOLATE_BAR<<" chocolate bars.";
    }
    
    else
        cout<<"invalid user input";
    return 0;
}

