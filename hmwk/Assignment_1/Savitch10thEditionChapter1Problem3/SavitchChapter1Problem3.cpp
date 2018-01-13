/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Savitch 10th edition Chapter 1 Problem 3
 * Created on January 5, 2018, 3:56 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //delcare variables and constants
    int nickels, dimes, quarters, total;
    const int NICKEL_VALUE = 5;
    const int DIME_VALUE = 10;
    const int QUARTER_VALUE = 25;
    
    //allow user to input number of coins
    cout<<"Enter number of quarters"<<endl;
    cin>>quarters;
    cout<<"Enter number of dimes"<<endl;
    cin>>dimes;
    cout<<"Enter number of nickels"<<endl;
    cin>>nickels;
    
    //calculate total value of coins
    total = (quarters * QUARTER_VALUE) + (dimes * DIME_VALUE) + (nickels * NICKEL_VALUE);
    
    //display total
    cout<<"Total value of coins is: "<<total<<" cents";
    return 0;
}

