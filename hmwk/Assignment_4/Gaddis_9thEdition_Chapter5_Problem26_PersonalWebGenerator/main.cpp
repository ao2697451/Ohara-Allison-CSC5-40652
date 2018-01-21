/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 5 Problem 26 "Personal Web Generator"
 * Created on January 19, 2018, 8:29 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ofstream outputFile;
    string name, description;
    string readIn;
    cout<<"Enter your  name: ";
    getline(cin, name);
    cout<<"Describe yourself: ";
    getline(cin, description);
    
    outputFile.open("webpage.html");
    
    outputFile<<"<html>\n<head>\n</head>\n<body>\n  <center>\n      <h1>";
    outputFile<<name<<"</h1\n   </center>\n    <hr />\n";
    outputFile<<description<<"\n    <hr />\n</body>\n</html>";
    
    cout<<"HTML with user input written to file 'webpage.html'";
    
    return 0;
}

