/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Savitch 10th Edition Chapter 4 Problem 5
 * 
 * Created on January 19, 2018, 5:49 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int BMR(float);
int physicalActivity (int, float, int);
int main(int argc, char** argv) {
    float weight, servings, totalCalories;
    int intensity, minutes, caloriesPerServing;

    cout<<"Activity: "<<setw(13)<<"Intensity\n";
    cout<<"Running 10 mph:"<<setw(7)<<"17\n";
    cout<<"Running 6 mph: "<<setw(7)<<"10\n";
    cout<<"Basketball:"<<setw(10)<<"8\n";
    cout<<"Walking 1 mph:"<<setw(7)<<"1\n";
    cout<<"How much do you weigh in pounds?\n";
    cin>>weight;
    cout<<"How many minutes did you perform the activity for?\n";
    cin>>minutes;
    cout<<"What is the intensity of the activity?\n";
    cin>>intensity;
    cout<<"How many calories are in one serving of you favorite food?\n";
    cout<<"A slice of pizza has about 285 calories and a serving of mac n cheese";
    cout<<" has about 310 calories.\n";
    cin>>caloriesPerServing;
    
    totalCalories = BMR(weight); //calculate calories for living
    cout<<totalCalories<<endl;
    totalCalories += physicalActivity(intensity, weight, minutes); //calculate calories for activity
    cout<<totalCalories<<endl;
    totalCalories *= 1.1; //include calories needed for digestion;
    cout<<totalCalories<<endl;
    
    servings = totalCalories / caloriesPerServing;
    
    cout<<setprecision(2)<<fixed<<"You should eat "<<servings<<" servings.";
    return 0;
}

BMR(float P){
    int calories = 70 * pow((P / 2.2), 0.756);
    return calories;
}

physicalActivity(int intensity, float P, int minutes){
    int calories = 0.0385 * intensity * P * minutes;
    return calories;
}