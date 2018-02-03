/*
 Name: Allison Ohara (40652)
 Homework Assignment 5
 Gaddis 9th Edition Chapter 6 Problem 1: "Markup"
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Variables

//Function Prototypes
float calculateRetail(float, float);

int main (int argc, char** argv){
    const int PERCENT = 100;
    float cost, price, markup;
    cout<<"What is the item's wholesale cost?\n";
    cin>>cost;
    while(cost<0){
        cout<<"Invalid user input; enter a positive value.\n";
        cin>>cost;
    }
    cout<<"What is the markup percentage?\n";
    cin>>markup;
    while(markup<0){
        cout<<"Invalid user input; enter a positive value.\n";
        cin>>markup;
    }
    markup/=PERCENT; //change markup to decimal form
    price = calculateRetail(cost, markup);
    cout<<"The item's retail price is $"<<setprecision(2)<<fixed<<price<<endl;
    return 0;
}

float calculateRetail(float cost,  float markup){
    float retail;
    retail = cost;
    retail += cost * markup;
    return retail;
}
