/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 4 Problem 12 "Software Sales"
 * Created on January 15, 2018, 7:25 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const float FIRST_DISCOUNT = 0.8; //first discount is 20% off, or 80% of original price
    const float SECOND_DISCOUNT = 0.7; //second discount is 30% off, or 70% of original price
    const float THIRD_DISCOUNT = 0.6; //third discount is 40% off, or 60% of original price 
    const float FOURTH_DISCOUNT = 0.5; //fourth discount is 50% off, or 50% of original price
    const int PRICE = 99;
    float discount, total;
    int quantity;
    
    cout<<"How many units are being sold?\n";
    cin>>quantity;
    
    if(quantity>=100)
        discount = FOURTH_DISCOUNT;
    
    else if (quantity>=50)
        discount = THIRD_DISCOUNT;
    
    else if (quantity>=20)
        discount = SECOND_DISCOUNT;
    
    else if (quantity>=10)
        discount = FIRST_DISCOUNT;
    
    else if (quantity>0)
        discount = 1;
    
    else {
        cout<<"Invalid number of units";
        return 0;
    }
    
    total = quantity * discount * PRICE;
    
    cout<<"The total cost of the purchase is $"<<total;
    
    return 0;
}

