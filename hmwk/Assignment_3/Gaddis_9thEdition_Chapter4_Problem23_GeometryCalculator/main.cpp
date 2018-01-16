/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 4 Problem 23 "Geometry Calculator"
 * Display a menu and depending on the user's choice, calculate the area of a 
 * circle, rectangle, or triangle.
 * Created on January 15, 2018, 5:46 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    const int CIRCLE = 1;
    const int RECTANGLE = 2;
    const int TRIANGLE = 3;
    const int QUIT = 4;
    const float PI = 3.14159;
    int choice;
    float radius, length, width, base, height, area;
    
    //display menu
    cout<<"Geometry Calculator\n";
    cout<<"   1. Calculate the Area of a Circle.\n";
    cout<<"   2. Calculate the Area of a Rectangle.\n";
    cout<<"   3. Calculate the Area of a Triangle.\n";
    cout<<"   4. Quit.\n\n";
    cout<<"Enter your choice (1-4): \n";
    
    //get user input
    cin>>choice;
    
    //perform the user's choice.
    switch (choice){
        case CIRCLE: cout<<"What is the radius of the circle?\n";
                    cin>>radius;
                    area = PI * radius * radius;
                    if (radius<0){
                        cout<<"Invalid input; program end.";
                        return 0;
                    }
                    cout<<"Area of the circle: "<<area;
            break;
       
        case RECTANGLE: cout<<"What is the length of the rectangle?\n";
                        cin>>length;
                        cout<<"What is the width of the rectangle?\n";
                        cin>>width;
                        area = length * width;
                        if (length<0 || width<0){
                            cout<<"Invalid input; program end.";
                            return 0;
                        }
                        cout<<"Area of the rectangle: "<<area;
            break;
        
        case TRIANGLE: cout<<"What is the base of the triangle?\n";
                         cin>>base;
                        cout<<"What is the height of the triangle?\n";
                        cin>>height;
                        area = base * height * .5;
                        if (base<0 || height<0){
                            cout<<"Invalid input; program end";
                            return 0;
                        }
                        cout<<"Area of the triangle: "<<area;
            break;
       
        case QUIT: return 0;
             break;
        
        default: cout<<"You made an invalid choice.";
                
    }
            
    return 0;
}

