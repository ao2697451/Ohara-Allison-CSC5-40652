/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Lab Assignment 5 "Paycheck"
 * Switch Case Version 1 - Use independent, not nested, switch statements
 * Created on January 17, 2018, 1:59 PM
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
    // use independent (not nested) switch statements
    switch (hrsWrkd<0){
        case true: cout<<"Invalid user input. Pay rate and hours worked must be positive values.";
        return 0;
        break;
    }
    switch (payRate<0){
        case true: cout<<"Invalid user input. Pay rate and hours worked must be positive values.";
        return 0;
        break;
    }
    switch (hrsWrkd <= REGULAR_HOURS){
        case false: paycheck = payRate * REGULAR_HOURS;
        paycheck += payRate * DOUBLE_TIME * (hrsWrkd - REGULAR_HOURS);
        break;
        
        default: paycheck = payRate * hrsWrkd;
    }

    cout<<"Your paycheck is $"<<paycheck;
    return 0;
}

