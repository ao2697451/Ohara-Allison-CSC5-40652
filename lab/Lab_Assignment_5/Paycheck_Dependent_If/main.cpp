/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Lab Assignment 5 "Paycheck"
 * Dependent If - if/else if/ else statements
 * Created on January 17, 2018, 1:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int REGULAR_HOURS = 40; //40 hours worked at normal pay
    const int DOUBLE_TIME = 2; //get paid twice as much for every hour above 40
    int payRate, hrsWrkd, paycheck;
    
    //get user input
    cout<<"How much money do you make per hour in dollars?\n";
    cin>>payRate;
    
    cout<<"How many hours did you work?\n";
    cin>>hrsWrkd;
    
    //calculate paycheck
    // use if/if else statements
    
    if(payRate>=0 && hrsWrkd>=0){
        if (hrsWrkd <= REGULAR_HOURS)
            paycheck = hrsWrkd * payRate;
        
        else {
            paycheck = payRate * REGULAR_HOURS;
            paycheck += DOUBLE_TIME * payRate * (hrsWrkd - REGULAR_HOURS);
        }
    }
    
    else{
        cout<<"Invalid user input. Pay rate and hours worked must be positive values.";
        return 0;
    }
    
    cout<<"Your paycheck is $"<<paycheck;
    return 0;
}

