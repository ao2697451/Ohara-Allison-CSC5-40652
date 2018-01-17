/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Lab Assignment 5 "Paycheck"
 * Independent If - use only if statements
 * Created on January 17, 2018, 1:55 PM
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
    //use only independent if statements
    
    if (hrsWrkd<= REGULAR_HOURS && payRate>=0 && hrsWrkd>=0)
        paycheck = payRate * hrsWrkd;
    
    if (hrsWrkd>REGULAR_HOURS && payRate>=0){
        paycheck = payRate * REGULAR_HOURS;
        paycheck += payRate * DOUBLE_TIME * (hrsWrkd - REGULAR_HOURS);
    }
    
    if (hrsWrkd<0 || payRate<0){
        cout<<"Invalid user input. Pay rate and hours worked must be positive values.";
        return 0;
    }
    
    cout<<"Your paycheck is $"<<paycheck;
    return 0;
}

