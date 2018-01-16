/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 4 Problem 1 "Minimum / Maximum"
 * Allow the user to input two numbers, and then find which one is smaller and
 * which one is larger.
 * Created on January 15, 2018, 7:10 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int x, y;
    
    cout<<"Enter the first number.\n";
    cin>>x;
    
    cout<<"Enter the second number.\n";
    cin>>y;
    
    if (x>y)
        cout<<y<<" is smaller and "<<x<<" is larger.";
    else if (y>x)
        cout<<x<<" is smaller and "<<y<<" is larger.";
    else
        cout<<"You entered two equal numbers";

    return 0;
}

