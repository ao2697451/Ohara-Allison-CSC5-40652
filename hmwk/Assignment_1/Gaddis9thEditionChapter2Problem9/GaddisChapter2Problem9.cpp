/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *Gaddis Chapter 2 9th edition Problem 9
 * Created on January 5, 2018, 3:26 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //display how many bytes each data type uses
    cout<<"The char data type uses "<<sizeof(char);
    cout<<" bytes"<<endl;
    cout<<"The int data type uses "<<sizeof(int);
    cout<<" bytes"<<endl;
    cout<<"The float data type uses "<<sizeof(float);
    cout<<" bytes"<<endl;
    cout<<"The double data type uses "<<sizeof(double);
    cout<<" bytes"<<endl;
    return 0;
}

