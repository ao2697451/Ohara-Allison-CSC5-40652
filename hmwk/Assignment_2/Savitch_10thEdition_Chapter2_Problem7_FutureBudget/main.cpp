/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Savitch 10th Edition Chapter 2 Problem 7 
 * Find the estimated cost of something in x amount of years at a certain
 * rate of inflation.
 * Created on January 12, 2018, 11:02 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    int years, yearsPassed;
    float itemCost, futureItemCost, inflationRate;
    const int PERCENT = 100; //divide percents by 100 to get decimals
    
    //allow user to input item cost, years, and inflation rate
    cout<<"What does the item cost now?\n";
    cin>>itemCost;
    
    cout<<"How many years from now will the item be purchased?\n";
    cin>>years;
    
    cout<<"What is the rate of inflation? Write the percentage";
    cout<<" (i.e. if the inflation rate is 5.6% write 5.6)\n";
    cin>>inflationRate;
    
    //change percent to decimal
    inflationRate = inflationRate / PERCENT;
    
    //calculate price of item in inputted amount of years
    yearsPassed = 0;
    while (yearsPassed<years){
        
        itemCost += (itemCost * inflationRate);
        yearsPassed++;
        
    }
    
    //display cost of item in the future
    cout<<"After "<<years<<" years, the item will cost $";
    cout<<fixed<<setprecision(2)<<itemCost;
    
    return 0;
}

