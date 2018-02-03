/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara (40652)
 * Gaddis 9th Edition Chapter 7 Problem 3 "Chips and Salsa"
 * Created on February 2, 2018, 4:00 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string names[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jars[5];
    int sum=0;
    int highest, lowest;
    
    for(int i = 0; i<5; i++){
        cout<<"How many jars of the "<<names[i]<<" salsa were sold?\n";
        cin>>jars[i];
        while(jars[i]<0){
            cout<<"Invalid user input. Enter a positive number.\n";
            cin>>jars[i];
        }
    }
    highest=lowest=1;
    cout<<"Type of Salsa:     Number of Jars Sold:\n";
    for(int i = 0; i<5; i++){
        cout<<setw(7)<<names[i]<<setw(23)<<jars[i]<<endl;
        sum+=jars[i];
        if(jars[i]<jars[lowest])
            lowest=i;
        else if(jars[i]>jars[highest])
            highest=i;
    }
    cout<<"Total Sales: "<<sum<<" jars\n";
    cout<<"The salsa that sold the most products is "<<names[highest]<<endl;
    cout<<"The salsa that sold the least products is "<<names[lowest]<<endl;
    return 0;
}

