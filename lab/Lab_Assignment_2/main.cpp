/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *
 * Created on January 11, 2018, 1:42 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float milBdgt, fedBdgt, mlPrcnt;
    const float BILLION = 1e09f; //A billion is 1,000,000,000
    const float TRILLION = 1e12f; //A trillion is 1,000,000,000,000
    const int PERCENT = 100; // A percent is found by multiplying by 100
    
    milBdgt = 639.1e09f; //Military Budget is 639.1 Billion
    fedBdgt = 4.094e12f; //Federal Budget is 4.094 Trillion
    
    //calculate military budget as a percent
    mlPrcnt = milBdgt / fedBdgt;
    
    //output result
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The military budget is $"<<milBdgt / BILLION<<" billion"<<endl;
    cout<<setprecision(3);
    cout<<"The federal budget is $"<<fedBdgt / TRILLION<<" trillion"<<endl;
    cout<<setprecision(2);
    cout<<"The military budget is "<<mlPrcnt * PERCENT<<"%";
    cout<<" of the federal budget."<<endl;
    
    return 0;
}

