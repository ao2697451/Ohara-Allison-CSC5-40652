/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 9 Problem 9 "How Many Calories"
 * Find how many calories the user-inputted amount of cookies is
 * Created on January 12, 2018, 10:34 AM
 */

#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare constants
    const int TOTAL_COOKIES = 30; //the bag holds 30 cookies
    const int SERVINGS = 10; //the bag has 10 servings
    const int CALORIES_PER_SERVING = 300; //there are 300 calories in a serving
    
    //declare variables
    int cookiesEaten, totalCalories, caloriesPerCookie, cookiesPerServing;
    //allow user to input how many cookies they ate
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookiesEaten;
    
    //calculate calories per cookie
    cookiesPerServing = TOTAL_COOKIES / SERVINGS; 
    caloriesPerCookie = CALORIES_PER_SERVING / cookiesPerServing;
    
    //calculate total calories eaten by user
    totalCalories = cookiesEaten * caloriesPerCookie;
    
    //display total calories
    cout<<"You ate "<<cookiesEaten<<" cookies with "<<caloriesPerCookie;
    cout<<" calories each.\n";
    cout<<"You consumed "<<totalCalories<<" total calories.";
    return 0;
}

