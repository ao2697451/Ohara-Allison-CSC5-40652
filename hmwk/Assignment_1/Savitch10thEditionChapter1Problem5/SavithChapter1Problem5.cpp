/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 *
 * Created on January 5, 2018, 4:05 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variable
    char a;
    
    //allows user to input character
    cout<<"Choose your character.\n";
    cin>>a;
    
    //Compose large c with chosen character
    cout<<endl;
    cout<<"  "<<a<<" "<<a<<" "<<a<<endl;
    cout<<" "<<a<<"    "<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<" "<<a<<"    "<<a<<endl;
    cout<<"  "<<a<<" "<<a<<" "<<a;
    return 0;
}

