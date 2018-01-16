/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 4 Problem 25
 * Created on January 15, 2018, 9:42 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    const float A_PRICE = 39.99; //package A is $39.99 a month
    const float B_PRICE = 59.99;//Package B is $59.99 a month
    const float C_PRICE = 69.99;//Package C is $69.99 a month
    const int A_PLUS = 10; // Package A extra gigs are $10 each
    const int B_PLUS = 5;//Package B extra gigs are $5 each
    const int A_MAX = 4; //4 gigs are provided with package A
    const int B_MAX = 8; //8 gigs are provided with package B
    
    int gigs;
    float total;
    char choice;
    
    cout<<"Choose your package: "<<endl;
    cout<<"A\n";
    cout<<"B\n";
    cout<<"C\n";
    cin>>choice;
    
    cout<<"How many gigabytes did you use?\n";
    cin>>gigs;
    
    switch(choice){
        case 'a':
        case 'A': total = A_PRICE + (gigs - A_MAX) * A_PLUS;
        break;
        
        case 'b':
        case 'B': total = B_PRICE + (gigs - B_MAX) * B_PLUS;
        break;
        
        case 'c':
        case 'C': total = C_PRICE;
        break;
        
        default: cout<<"Invalid package choice.";
                return 0;
                
    }
    
    cout<<"Your total monthly mill is $"<<total;
    return 0;
}

