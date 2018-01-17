/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Lab Assignment 5
 * Created on January 17, 2018, 11:45 AM
 */

#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//put the function determining whether each statement is true or false
//into a function to keep from having to type the same thing over and over again

void printRow(bool x, bool y){ //pass the booleans variables as arguments
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F');
    cout<<endl;
}
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Generate the Heading of the Truth Table
    //I added an extra space between the headings, so the table would be more clear
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X  " 
        <<"!(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    
    //First Row
    printRow(true,true); // write the first row where x is true and y is true
    
    //Second Row
    printRow(true, false); // write the second row where x is true and y is false
    
    //Third Row
    printRow(false, true); //write the third row where x is false and y is true
    
    //Fourth Row
    printRow(false, false); //write the fourth row where x is false and y is false
    

    //Exit
    return 0;
}


