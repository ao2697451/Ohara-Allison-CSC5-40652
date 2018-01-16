/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara 
 * Gaddis 9th Edition Chapter 4 Problem 19 "Spectral Analysis"
 * Ask for the user to input a wavelength in meters and then display what
 * kind of wave it is, according to the chart in the Gaddis book.
 * Created on January 15, 2018, 6:06 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const float RADIO = 1e-2;
    const float MICROWAVE = 1e-3;
    const float INFRARED = 7e-7;
    const float VISIBLE = 4e-7;
    const float ULTRAVIOLET = 1e-8;
    const float XRAYS = 1e-11;
    
    float wavelength;
    
    //get user inputted value
    cout<<"What is the wavelength in meters? (i.e. 2e-3 or 0.00004)\n";
    cin>>wavelength;
    
    //find type of wavelength;
    if (wavelength>=RADIO)
        cout<<"It's a radio wave.";
    else if (wavelength>=MICROWAVE)
        cout<<"It's a microwave wave.";
    else if (wavelength>=INFRARED)
        cout<<"It's an infrared wave.";
    else if (wavelength>=VISIBLE)
        cout<<"It's a visible light wave.";
    else if (wavelength>=ULTRAVIOLET)
        cout<<"It's an ultraviolet wave.";
    else if (wavelength>=XRAYS)
        cout<<"It's an x-ray wave.";
    else 
        cout<<"It's a gamma ray.";   
    return 0;
}

