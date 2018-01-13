/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Gaddis 9th Edition Chapter 3 Problem 3 "Test Average"
 * Find the average of 5 test scores entered by the user
 * Created on January 11, 2018, 2:39 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float test1, test2, test3, test4, test5, testAverage;
    
    //allow user to input test scores
    cout<<"What is the first test score?\n";
    cin>>test1;
    
    cout<<"What is the second test score?\n";
    cin>>test2;
    
    cout<<"What is the third test score?\n";
    cin>>test3;
    
    cout<<"What is the fourth test score?\n";
    cin>>test4;
    
    cout<<"What is the fifth test score?\n";
    cin>>test5;
    
    //calculate average
    testAverage = (test1 + test2 + test3 + test4 + test5) / 5;
    
    //display average
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average of the five test scores is "<<testAverage;
    return 0;
}

