/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 3 Problem 17 "Math Tutor"
 * Display two random numbers, pause, then show the sum
 * Created on January 11, 2018, 3:32 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    //declare constant min and max so numbers aren't too large
    const int MAX_VALUE = 999;
    const int MIN_VALUE = 1;
    //declare random number variables
    int number1, number2, sum;
    
    //Get the system time
    unsigned seed = time(0);
    
    //seed the random generator
    srand(seed);
    
    //find two random numbers between 1 and 999
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    //find sum
    sum =  number1 + number2;
    
    //output numbers in addition equation
    cout<<setw(5)<<number1<<endl;
    cout<<"+"<<setw(4)<<number2<<endl;
    
    //wait until user presses a key
    cout<<"Press the enter key to continue"<<endl;
    cin.get();
    
    //display equation with correct sum
    cout<<setw(5)<<number1<<endl;
    cout<<"+"<<setw(4)<<number2<<endl;
    cout<<"-----"<<endl;
    cout<<setw(5)<<sum<<endl;
    
    return 0;
}

