/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Savitch 10th Edition Chapter 4 Problem 2
 * Find the hat, jacket, and waist sizes of an individual
 * based on information that they input.
 * Created on January 19, 2018, 11:15 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

void findHat(float weight, float height){
        float hatSize = (weight / height) * 2.9;
        cout<<"Hat size: "<<hatSize<<endl;
    }
    
    void findJacket(int age, float weight, float height){        
        int adjustJacket = (age / 10) - 3;
        float jacketSize = (height * weight / 288) + (adjustJacket / 8);
        cout<<"Jacket Size: "<<jacketSize<<endl;
    }
    
    void findWaist(int age, float weight, float height){
        int adjustWaist = (age / 2) - 14;
        float waist = (weight / 5.7) + (adjustWaist / 10);
        cout<<"Waist in inches "<<waist<<endl;
    }
    
int main(int argc, char** argv) {

    //declare variables
    float weight, height;
    int age;
    char answer;
    
    do{
        cout<<"What is your weight in pounds?\n";
        cin>>weight;
        cout<<"What is your height in inches?\n";
        cin>>height;
        cout<<"What is your age in years?\n";
        cin>>age;
        
        cout<<setprecision(2)<<fixed;
        
        findHat(weight, height);
        findJacket(age, weight, height);
        findWaist(age, weight, height);
        
        cout<<"Would you like to repeat? Enter y for yes and n for no.\n";
        cin>>answer;
        
        
    }while (answer=='Y' || answer == 'y');
    
    return 0;
}


