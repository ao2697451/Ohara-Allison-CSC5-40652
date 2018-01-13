/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Savitch Chapter 1 10th edition problem 1
 * Created on January 5, 2018, 4:24 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    int a, b, sum, product;
    
    //allow user to input values
    cout<<"Enter your first integer.\n";
    cin>>a;
    cout<<"Enter your second integer.\n";
    cin>>b;
    
    //calculate sum and product
    sum = a + b;
    product = a * b;
    
    //display sum and product
    cout<<"Sum is "<<sum<<endl;
    cout<<"Product is "<<product<<endl;
    
    return 0;
}

