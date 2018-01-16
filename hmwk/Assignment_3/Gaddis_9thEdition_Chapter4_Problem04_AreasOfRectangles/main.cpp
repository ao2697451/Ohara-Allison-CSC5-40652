/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 4 Problem 4
 * Created on January 15, 2018, 9:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float length1, width1, area1, length2, width2, area2;
    
    cout<<"What is the length of the first rectangle?\n";
    cin>>length1;
    cout<<"What is the width of the first rectangle?\n";
    cin>>width1;
    cout<<"What is the length of the second rectangle?\n";
    cin>>length2;
    cout<<"What is the width of the second rectangle?\n";
    cin>>width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1>area2)
        cout<<"The 1st rectangle has a greater area.";
    else if (area2>area1)
        cout<<"The 2nd rectangle has a greater area.";
    else
        cout<<"The rectangles have equal areas.";
    
    return 0;
}

