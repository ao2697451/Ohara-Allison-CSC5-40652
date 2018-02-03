/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 7 Problem 2 "Rainfall Statistics"
 * Created on January 27, 2018, 5:09 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float rain [12];
    float sum, average, highest, lowest;
    sum = average = 0;
    int high, low;
    high = low = 0;
    for(short i = 0; i<12; i++){
        cout<<"How much rain fell in month "<<i + 1<<"?\n";
        cin>>rain[i];
        while(rain[i]<0){
            cout<<"You must enter a positive integer; try again\n";
            cin>>rain[i];
        }
        sum+=rain[i];
    }
    highest = lowest = rain[0];
    for(short i = 0; i<12; i++){
        if (rain[i]>highest){
            highest = rain[i];
            high = i + 1;
        }
        else if (rain[i]<lowest){
            lowest = rain[i];    
            low = i + 1;
        }
    }
    average = sum / 12;
    cout<<"The total rainfall for the year is "<<sum<<endl;
    cout<<"The average rainfall per month is "<<setprecision(2)<<fixed<<average<<endl;
    cout<<"The highest amount of rain is "<<highest<<" in month "<<high<<endl;
    cout<<"The lowest amount of rain is "<<lowest<<" in month "<<low<<endl;
    return 0;
}

