/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 3 Problem 22 "Angle Calculator"
 * Find the sine, cosine, and tangent of a user-inputted angle
 * Created on January 12, 2018, 12:33 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float angle;
    
    //allow user to input angle
    cout<<"Enter in an angle in radians.\n";
    cin>>angle;
    
    //display sine, cosine, and tangent
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Sine of the angle is "<<sin(angle)<<endl;
    cout<<"Cosine of the angle is "<<cos(angle)<<endl;
    cout<<"Tangent of the angle is "<<tan(angle)<<endl;
    
    return 0;
}

