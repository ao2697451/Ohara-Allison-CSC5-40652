/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Savitch 10th Edition Chapter 4 Problem 6
 * Allow a user to pay for a twinkie with coins
 * Created on January 19, 2018, 2:55 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */


int calculateChange(int inputtedCoins){
    int change = (inputtedCoins - 350);
    cout<<change<<endl;
    cout<<"Your change is "<<change<<" cents\n";
    return change;
}

int quartersChange (int &change){
    int quarters = 0;
    while (change>=25){
        quarters+=1;
        change-=25;
    }
    return quarters;
}

int dimesChange (int &change){
    int dimes = 0;
    while (change >= 10){
        dimes += 1;
        change -= 10;
    }
    return dimes;
}
int nickelsChange (int &change){
    int nickels =0;
    while (change >= 5){
        nickels +=1;
        change -=5;
    }
    return nickels;
}

int main(int argc, char** argv) {

    const int COST = 350; // twinkie costs $3.50, or 350 cents
    
    string coin;
    float coins;
    int change;
    int dimes, nickels, quarters;
    
    cout<<"A twinkie costs $3.50\n";
    
    do {
    const int QUARTER = 25;
    const int DIME = 10;
    const int DOLLAR = 100;
    const int NICKEL = 5;
    cout<<"Insert coins; enter either 'dollar', 'quarter', 'dime, or 'nickel.' \n";
    cin>>coin;
    if (coin == "dollar")
        coins += DOLLAR;
    if (coin == "quarter")
        coins += QUARTER;
    if (coin == "dime")
        coins += DIME;
    if (coin == "nickel")
        coins += NICKEL;
    cout<<"You've inputted $"<<setprecision(2)<<fixed<<coins / 100<<endl;
    } while(coins < COST);
    
    cout<<"Enjoy your deep fried twinkie\n";
    change = calculateChange(coins);
    quarters = quartersChange(change);
    dimes = dimesChange(change);
    nickels = nickelsChange(change);
    
    cout<<"Your change will be give in: \n";
    cout<<quarters<<" quarter(s)\n";
    cout<<dimes<<" dime(s)\n";
    cout<<nickels<<" nickel(s).";
    return 0;
}

