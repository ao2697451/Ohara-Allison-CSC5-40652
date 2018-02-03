/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 7 Problem 1 "Largest/Smallest Array Values"
 * Created on January 27, 2018, 4:22 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int numbers[10];
    int highest, lowest;
    for(short i = 0; i<10; i++){
        cout<<"Enter a number\n";
        cin>>numbers[i];
    }
    highest = lowest = numbers[0];
    for (short i = 0; i<10;i++){
        if(numbers[i]>highest)
            highest = numbers[i];
        else if(numbers[i]<lowest)
            lowest=numbers[i];
    }
    cout<<"The largest value inputted is "<<highest;
    cout<<" and the smallest value is "<<lowest<<endl;
    return 0;
}

