/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 5 Problem 1 "Sum of Numbers"
 * Find the sum of all the numbers preceding and including a user-inputted number
 * Created on January 19, 2018, 4:11 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int num, sum;
    cout<<"Enter a positive integer value: \n";
    cin>>num;
    if(num<0){
        cout<<"Invalid user input. You must enter a positive integer.";
        return 0;
    }
    for (int i = 1; i<=num; i++){
        sum+= i;
    }
    
    cout<<"The sum of "<<num<<" and all the numbers preceding it from 1 onward is ";
    cout<<sum;
    
    return 0;
}

