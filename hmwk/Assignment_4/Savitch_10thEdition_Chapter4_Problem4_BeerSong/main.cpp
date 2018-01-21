/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Savitch 10th Edition Chapter 4 Problem 4
 * Output the lyrics of the song "Ninety Nine Bottles of 
 * Beer on the Wall".
 * Created on January 19, 2018, 2:05 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables 
    int tens, ones;
    string number;
    
     for(int i = 99; i>0; i--){ //run the program from "ninety-nine" to "one"
       tens = i / 10; // calculate tens digit
       ones = i % 10; // calculate ones digit
       //if it's a one digit number, capitalize and don't allow for any additional
       //words to be added
        if (tens == 0){ 
            if (ones ==1)
                number = "One";
            else if (ones == 2)
                number = "Two";
            else if (ones == 3)
                number = "Three";
            else if (ones == 4)
                number = "Four";
            else if (ones == 5)
                number ="Five";
            else if (ones ==6 )
                number = "Six";
            else if (ones == 7)
                number = "Seven";
            else if (ones == 8)
                number = "Eight";
            else if (ones == 9)
                number = "Nine";
        }
        else if (tens == 1){
            if (ones == 0)
                number = "Ten";
            else if (ones ==1)
                number = "Eleven";
            else if (ones ==2)
                number = "Twelve";
            else if (ones ==3)
                number = "Thirteen";
            else if (ones == 4)
                number = "Fourteen";
            else if (ones == 5)
                number = "Fifteen";
            else if (ones == 6)
                number = "Sixteen";
            else if (ones == 7)
                number = "Seventeen";
            else if (ones == 8)
                number = "Eighteen";
            else if (ones == 9)
                number = "Nineteen";
        }
        else {
            if (tens == 2)
            number = "Twenty";
        else if (tens == 3)
            number = "Thirty";
        else if (tens == 4)
            number = "Fourty";
        else if (tens == 5)
            number = "Fifty";
        else if (tens == 6)
            number = "Sixty";
        else if (tens == 7)
            number = "Seventy";
        else if (tens == 8)
            number = "Eighty";
        else if (tens == 9)
            number = "Ninety";
        
        if (ones ==1)
                number += "-one";
            else if (ones == 2)
                number += "-two";
            else if (ones == 3)
                number += "-three";
            else if (ones == 4)
                number += "-four";
            else if (ones == 5)
                number +="-five";
            else if (ones ==6 )
                number += "-six";
            else if (ones == 7)
                number += "-seven";
            else if (ones == 8)
                number += "-eight";
            else if (ones == 9)
                number += "-nine";
        }
            if( i == 1){
                cout<<number<<" bottle of beer on the wall.\n\n";
                cout<<number<<" bottle of beer on the wall,\n";
                cout<<number<<" bottle of beer\n";
                cout<<"Take one down, pass it around\n";
                cout<<"Zero bottles of beer on the wall.";
            }
       
            else {
                if (i != 99)
                    cout<<number<<" bottles of beer on the wall.\n\n";
                cout<<number<<" bottles of beer on the wall,\n";
                cout<<number<<" bottles of beer,\n";
                cout<<"Take one down, pass it around\n";
            }
    
     }
    return 0;
}

