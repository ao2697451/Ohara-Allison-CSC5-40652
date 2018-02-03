/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara (40652)
 * Gaddis 9th Edition Chapter 8 Problem 1 "Charge Account Validation"
 * Created on February 2, 2018, 5:22 PM
 */

#include <iostream>

using namespace std;
int linearSearch (unsigned int [],int, int);
/*
 * 
 */
int main(int argc, char** argv) {
    unsigned int list[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int number;
    int position;
    cout<<"Enter a charge account number\n";
    cin>>number;
    position = linearSearch(list, 18, number);
    if(position==-1)
        cout<<"Invalid user input\n";
    else
        cout<<"Valid user input.\n";
    return 0;
}

int linearSearch (unsigned int list[], int size, int number){
    int index = 0;
    int position = -1;
    bool found = false;
    
    while(index<size&& !found)
    {
        if(list[index]==number){
            found=true;
            position = index;
        }
        index++;
    }
    return position;
    }
