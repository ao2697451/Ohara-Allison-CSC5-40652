/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 6 Problem 8 "Coin Toss"
 * Created on January 27, 2018, 4:01 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>

//User Libraries

//Global Constants

//Function Prototypes

using namespace std;

/*
 * 
 */
void coinToss(){
    int num = rand()%2 + 1;
    if (num == 1)
        cout<<"heads"<<endl;
    else
        cout<<"tails"<<endl;
}
int main(int argc, char** argv) {
    srand(static_cast<unsigned int> (time(0)));
    int tosses;
    cout<<"How many times would you like to toss the coins?\n";
    cin>>tosses;
    for(int i=1; i<=tosses; i++){
        coinToss();
    }
    return 0;
}

