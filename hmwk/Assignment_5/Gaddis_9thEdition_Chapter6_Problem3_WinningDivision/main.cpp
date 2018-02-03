/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 6 Problem 3 "Winning Division"
 * Created on January 27, 2018, 3:34 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * 
 */
float getSales(string);
void findHighest(float, float, float, float);
int main(int argc, char** argv) {
    float northwestSales, northeastSales, southeastSales, southwestSales;
    northwestSales=getSales("Northwest");
    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    southwestSales = getSales("Southwest");
    findHighest(northeastSales, northwestSales, southeastSales,southwestSales);
    return 0;
}

float getSales(string division){
    float sales;
    cout<<"What is "<<division<<"'s quarterly sales in dollars?\n";
    cin>>sales;
    while(sales<0){
        cin>>sales;
    }
    return sales;
}
void findHighest(float northeastSales, float northwestSales, float southeastSales, float southwestSales){
    float highestSale;
    string highestDivision;
    if(northeastSales>northwestSales&&northeastSales>southeastSales&&northeastSales>southwestSales){
        highestDivision = "Northeast";
        highestSale = northeastSales;
    }
    else if (northwestSales>northeastSales&&northwestSales>southeastSales&&northwestSales>southwestSales){
        highestDivision = "Northwest";
        highestSale = northwestSales;
    }
    else if (southwestSales>northeastSales&&southwestSales>northwestSales&&southwestSales>southeastSales){
        highestDivision = "Southwest";
        highestSale = southwestSales;
    }
    else{
        highestDivision = "Southeast";
        highestSale = southeastSales;
    }
    cout<<"The division with the highest quarterly sales is "<<highestDivision<<endl;
    cout<<"It's sales figure is $"<<setprecision(2)<<fixed<<highestSale<<endl;
}
