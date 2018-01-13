/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allion Ohara
 * Gaddis 9th Edition Chapter 3 Problem 1 "Miles per Gallon"
 * Find the miles per gallon that a car can go depending on the number of miles
 * a car can drive of a full tank and on how many gallons of gas a car can hold
 * Created on January 10, 2018, 3:58 PM
 */


#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float mileage, gallonsPerTank, milesPerTank;
    
    //allow user to input gallons per tank and miles per tank
    cout<<"How many gallons of gas can the car hold?\n";
    cin>>gallonsPerTank;
    cout<<"How many miles can the car go on a full tank of gas?\n";
    cin>>milesPerTank;
    
    //calculate mileage
    mileage = milesPerTank / gallonsPerTank ;
    
    //display mileage
    cout<<"The car can drive "<<mileage<<" miles per gallon of gas.";
            
    return 0;
}
