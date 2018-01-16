/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 4 Problem 11 "Math Tutor"
 * This problem involves a modification to the chapter 3 problem 17 "Math Tutor"
 * As in the previous problem's program, show two random numbers to be added.
 * However, unlike the previous program, this one should wait for the user to 
 * submit an answer and tell them whether the answer is correct or not.
 * Created on January 15, 2018, 2:02 PM
 */

#include <ctime>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //initialize constants to keep random numbers from being too large
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 999;
    
    //declare variables
    int number1, number2, sum, inputSum;
    
    //get system time
    unsigned seed = time(0);
    
    //seed the random number generator
    srand(seed);
    
    //find random numbers
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    
    //display numbers to be added
    cout<<setw(5)<<number1<<endl;
    cout<<"+"<<setw(4)<<number2<<endl;
    cout<<"-----"<<endl<<endl;
    
    cout<<"Type in the sum, then hit enter.\n";
    cin>>inputSum;
    
    //calculate correct sum
    sum = number1 + number2;
    
    //compare inputted answer to correct answer and give responses
    if (sum == inputSum)
        cout<<"Congratulations! That is correct!";
    
    else{
        cout<<"That is incorrect.\n";
        cout<<"The correct answer is "<<sum;
    
    }
    return 0;
}

