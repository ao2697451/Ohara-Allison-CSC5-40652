/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* Allison Ohara
    Gaddis Ninth Edition Chapter 2 Problem 8
    Created January 5, 2018 2:52 p.m.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char** argv){
    //Declare variables
    float item1, item2, item3, item4, item5;
    const float SALES_TAX = 0.07;//initialize constant value of tax in decimal form
    float total, subtotal, salesTax;
    
    //Initialize variables;
    item1=15.95;
    item2=24.95;
    item3=6.95;
    item4=12.95; 
    item5=3.95;
    
    subtotal = item1 + item2 + item3 +item4 +item5; //calculate subtotal
    salesTax = subtotal * SALES_TAX;//calculate sales tax
    total = subtotal + salesTax;// calculate total
    
    //output prices
    cout<<"Price of Item 1: $"<<item1<<endl;
    cout<<"Price of Item 2: $"<<item2<<endl;
    cout<<"Price of Item 3: $"<<item3<<endl;
    cout<<"Price of Item 4: $"<<item4<<endl;
    cout<<"Price of Item 5: $"<<item5<<endl;
    cout<<"Subtotal: $"<<subtotal<<endl;
    cout<<"Sales Tax: $"<<salesTax<<endl;
    cout<<"Total: $"<<total;
    
    return 0;
    
}