/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 5 Problem 22 "Square Display"
 * Created on January 19, 2018, 9:18 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int x;
    cout<<"Please enter a positive integer no greater than 15\n";
    cin>>x;
    if(x>0 && x<=15){
        for(int i=0; i<x; i++){
            for (int y=0; y<x; y++){
                cout<<"X";
            }
            cout<<"\n";
        }
    }
    else 
        cout<<"Invalid user input";
    return 0;
}

