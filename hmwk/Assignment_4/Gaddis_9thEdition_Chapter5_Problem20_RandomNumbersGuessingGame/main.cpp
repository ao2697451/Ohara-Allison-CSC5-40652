/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 5 Problem 20 "Random Numbers Guessing Game"
 * Created on January 19, 2018, 9:26 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //get system time
    unsigned seed = time(0);
    
    //seed the random number generator
    srand(seed);
    
    const int MAX_VALUE = 99;
    const int MIN_VALUE = 1;
    int guess;
    int number = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    
    cout<<"Guess the number.\n";
    cin>>guess;
    
    while(guess!=number){
        if (guess>number)
            cout<<"Too high, try again.\n";
        else
            cout<<"Too low, try again.\n";
        
        cin>>guess;
    }
    
    cout<<"Congratulations! You guessed the number!";
    
    return 0;
}

