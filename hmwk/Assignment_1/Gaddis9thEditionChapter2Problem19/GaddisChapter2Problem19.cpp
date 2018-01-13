/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *
 * Created on January 5, 2018, 3:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float newYork, denver, phoenix;
    const float INCREASE = 1.02;
    
    //initialize variables
    newYork = 85;
    denver = 88;
    phoenix = 106;
    
    //calculate new averages
    newYork*=INCREASE;
    denver*= INCREASE;
    phoenix*= INCREASE;
            
    //display new averages
    cout<<"New York average July high temperature: "<<newYork<<" degrees"<<endl;
    cout<<"Denver average July high temperature: "<<denver<<" degrees"<<endl;
    cout<<"Phoenix average July high temperature: "<<phoenix<<" degrees"<<endl;
    return 0;
}

