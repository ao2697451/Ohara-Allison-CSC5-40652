/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Gaddis Ninth Edition Chapter 2 Problem 4
 * Created on January 4, 2018, 9:46 PM
 */
#include <iostream>
#include <iomanip>//included for setprecision, so dollar values can be given to two decimal places

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double taxAmount, tipAmount, totalBill; //create variables for the tax, tip and totalBill values
    double cost = 88.67; //variable cost with price of meal
    const double TAX = 0.0675; // initialize constant with taxing percentage
    const double TIP = 0.2; //initialize constant with tip percentage

    taxAmount= cost * TAX; // calculate the value of tax
    tipAmount = (taxAmount + cost) * TIP;//Calculate the value of the tip
    totalBill = cost + taxAmount + tipAmount; //Calculate price of meal in total
    cout<<"Meal cost: $"<<cost<<endl;
    cout<<"Tax Amount: $"<<setprecision(2)<<fixed<<taxAmount<<endl; //round to two decimal places
    cout<<"Tip Amount: $"<<setprecision(2)<<fixed<<tipAmount<<endl; // round to two decimal places
    cout<<"Total Bill: $"<<setprecision(2)<<fixed<<totalBill;//round to two decimal places
            
    
    return 0;
}


