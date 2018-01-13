/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 *Lab Assignment 1
 * Created on January 10, 2018, 10:08 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables and constants
    const float PROFIT_MIN = 0.07;
    const float PROFIT_MAX = 0.065; //percent in decimal form
    const float FEDERAL_TAX = 0.184;
    const float STATE_TAX = 0.417;
    const float STATE_SALES_TAX = 0.0225; //percent in decimal form
    float basePrice, gasTotal, taxTotal, taxPercentage,profitMin;
    
    //calculate base price of tax
    gasTotal = 2.60; //total price of gas is $2.60 at Sam's Club
    basePrice = (gasTotal - FEDERAL_TAX - STATE_TAX) / (STATE_SALES_TAX +1);
    //calculate tax
    taxTotal = FEDERAL_TAX + STATE_TAX + (basePrice * STATE_SALES_TAX);
    taxPercentage = (taxTotal / basePrice) * 100;
    
    //calculate profit range
    profitMin = (PROFIT_MIN / basePrice) * 100 ;
    
    //output results
    cout<<"The total tax on a gallon of gas: $"<<setprecision(2)<<fixed<<showpoint<<taxTotal<<endl;
    cout<<"The base price for a gallon of gas: $ "<<basePrice<<endl;
    cout<<"Percentage price due to gas tax: "<<taxPercentage<<"%"<<endl;
    cout<<"Oil Company Profit Range (in percent): "<<profitMin<<"% to "<<PROFIT_MAX * 100<<"%";
    cout<<" per gallon"<<endl;
    
    return 0;
}

