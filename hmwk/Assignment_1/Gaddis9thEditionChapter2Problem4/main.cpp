/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Gaddis Chapter 2 Problem 4
 * Created on January 8, 2018, 4:02 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    const float TAX = 0.0675;
    const float TIP = 0.2;
    float charge = 88.67;
    float tax, tip, total;
    //calculate tax, tip, and total
    tax = TAX * charge;
    tip = TIP * (charge + tax);
    total = tax + tip + charge;
    
    //output tax, tip, and total
    cout<<"Tax Amount: "<<tax<<endl;
    cout<<"Tip Amount: "<<tip<<endl;
    cout<<"Total Cost: "<<total<<endl;
    return 0;
}

