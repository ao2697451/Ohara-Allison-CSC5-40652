/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 4 Problem 8 "Color Mixer"
 * Allow the user to input two primary colors, and then find the secondary
 * color the two colors would make when mixed.
 * Created on January 15, 2018, 7:15 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string color1, color2, secondaryColor;
    
    cout<<"Remember, the primary colors are red, blue, and yellow.\n";
    cout<<"Choose your first primary color.\n";
    cin>>color1;
    cout<<"Choose your second primary color.\n";
    cin>>color2;
    
    if(color1=="red" &&color2=="blue")
        secondaryColor = "purple";
    else if(color1 == "red" && color2=="yellow")
        secondaryColor = "orange";
    else if (color1 =="blue" && color2=="yellow")
        secondaryColor = "green";
    else{
        cout<<"Error; invalid input";
        return 0;
    }
    
    cout<<color1<<" and "<<color2<<" make "<<secondaryColor;
    return 0;
}

