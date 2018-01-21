/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 5 Problem 11 "Population"
 * Created on January 19, 2018, 6:24 PM
 */

#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int days;
    float increase, size;
    
    cout<<"What is the size of the population at its start?\n";
    cin>>size;
    cout<<"What is their average population increase (as a percentage)?\n";
    cin>>increase;
    cout<<"How many days will they multiply?\n";
    cin>>days;
    
    increase /= 100; //change increase to decimal
    if (size<2 || days<1 || increase<0){
        cout<<"Invalid user input.";
        return 0;
    }
    for(int i=1; i<=days; i++){
        size += (size * increase);
        size = round(size);
        cout<<"Day: "<<i<<endl;
        cout<<"Size of population: "<<size<<endl;
    }
    return 0;
}

