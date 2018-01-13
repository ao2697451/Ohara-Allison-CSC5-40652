/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Gaddis 9th edition Chapter 2 Problem 2
 * Created on January 5, 2018, 4:33 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //delcare variables
    float totalSales, eastSales;
    const float PERCENT = 0.58;
    
    //initialize total sale variable
    totalSales = 8.6;
    
    //calculate east coast division sales
    eastSales = totalSales * PERCENT;
    
    //display east coast sales
    cout<<"The East Coast Division generated "<<eastSales<<" million dollars"<<endl;
    return 0;
}

