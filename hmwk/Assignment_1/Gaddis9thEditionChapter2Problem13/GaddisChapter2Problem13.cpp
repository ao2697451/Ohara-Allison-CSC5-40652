/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Gaddis Chapter 2 9th Edition Problem 13
 * Created on January 5, 2018, 3:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare constant and variables
    const float PROFIT = 1.35;
    float cost;
    float sellingPrice;
    
    //initialize
    cost = 14.95;
    
    //calculate selling price
    sellingPrice = cost * PROFIT;
    
    //display selling price
    cout<<"Selling Price: $"<<sellingPrice<<" dollars"<<endl;
    return 0;
}

