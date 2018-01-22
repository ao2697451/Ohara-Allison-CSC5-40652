/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Lab Assignment 7
 * Created on January 21, 2018, 9:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int displayMenu(){
    cout<<"Choose from the following options: \n";
    cout<<"1. Gaddis 9th Edition Chapter 5 Problem 1 'Sum of Numbers'\n";
    cout<<"2. Gaddis 9th Edition Chapter 5 Problem 8 'Math Tutor'\n";
    cout<<"3. Gaddis 9th Edition Chapter 5 Problem 11 'Population'\n";
    cout<<"4. Gaddis 9th Edition Chapter 5 Problem 20 'Random Numbers Guessing Game'\n";
    cout<<"5. Gaddis 9th Edition Chapter 5 Problem 22 'Square Display'\n";
    cout<<"6. Gaddis 9th Edition Chapter 5 Problem 26 'Personal Web Generator'\n";
    cout<<"7. Savitch 10th Edition Chapter 4 Problem 2 'Sizes'\n";
    cout<<"8. Savitch 10th Edition Chapter 4 Problem 4 'Beer Song'\n";
    cout<<"9. Savitch 10th Edition Chapter 4 Problem 5 'Calories'\n";
    cout<<"10. Savitch 10th Edition Chapter 4 Problem 6 'Vending Machine'\n";
}

void menu(){ //for Gaddis Chapter 5 Problem 8 i.e. case 2
    cout<<"1. Addition Problem\n";
    cout<<"2. Subtraction Problem\n";
    cout<<"3. Multiplication Problem\n";
    cout<<"4. Division Problem\n";
    cout<<"5. Quit\n";
    cout<<"Select one and enter the corresponding number.\n";    
}

//following three functions for Savitch Chapter 4 Problem 2 i.e. case 7
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
//following four functions for Gaddis Chapter 5 Problem 8 i.e. case 2
int addition();
int subtraction();
int multiplication();
int division();

//following two functions for Savitch Chapter 4 Problem 5 i.e. case 9
int BMR(float);
int physicalActivity (int, float, int);

//following four functions for Savitch Chapter 4 Problem 6 i.e. case 10
int calculateChange(int inputtedCoins){
    int change = (inputtedCoins - 350);
    cout<<change<<endl;
    cout<<"Your change is "<<change<<" cents\n";
    return change;
}

int quartersChange (int &change){
    int quarters = 0;
    while (change>=25){
        quarters+=1;
        change-=25;
    }
    return quarters;
}

int dimesChange (int &change){
    int dimes = 0;
    while (change >= 10){
        dimes += 1;
        change -= 10;
    }
    return dimes;
}
int nickelsChange (int &change){
    int nickels =0;
    while (change >= 5){
        nickels +=1;
        change -=5;
    }
    return nickels;
}

int main(int argc, char** argv) {

    int option;
    
    do{
        displayMenu();
        cin>>option;
        
        switch(option){
            case 1: {
                cout<<"Sum of Numbers:\n";
                int num, sum;
            cout<<"Enter a positive integer value: \n";
            cin>>num;
            if(num<0){
                 cout<<"Invalid user input. You must enter a positive integer.";
                 break;
                 }
                for (int i = 1; i<=num; i++){
                 sum+= i;
                }
    
             cout<<"The sum of "<<num<<" and all the numbers preceding it from 1 onward is ";
             cout<<sum<<endl;
    
            break;
            }
            case 2: {
                cout<<"Math Tutor: \n";
                int number1, number2; 
                 int choice, answer, inputAnswer;
                //get system time
                unsigned seed = time(0);
    
                //seed the random number generator
                srand(seed);
                do{
                    do {
                        menu();
                        cin>>choice;
                    } while(choice!=1 && choice !=2 && choice!=3 && choice!=4 && choice!=5);
                    switch (choice){
                        case 1: answer = addition();
                        break;
       
                        case 2: answer = subtraction();
                        break;
        
                        case 3: answer = multiplication();
                        break;
        
                        case 4: answer = division();
                        break;
       
                    }
                    if (choice!=5){
                        cin>>inputAnswer;
                        if(answer == inputAnswer){
                            cout<<"Correct!\n";
                        }
                        else {
                            cout<<"That is incorrect.\n";
                            cout<<"The correct answer is: "<<answer<<endl;
                        }
                    }
                }while (choice!=5);
                break;
            }
            case 3: {
                cout<<"Population:\n";
                int days;
                float increase, size;
    
                cout<<"What is the size of the population at its start?\n";
                cin>>size;
                cout<<"What is their average population increase (as a percentage)?\n";
                cin>>increase;
                cout<<"How many days will they multiply?\n";
                cin>>days;
    
                increase /= 100; //change increase to decimal
                if (size<2 || days<1 || increase<0){
                        cout<<"Invalid user input.\n";
                }
                else{    
                    for(int i=1; i<=days; i++){
                        size += (size * increase);
                        size = round(size);
                        cout<<"Day: "<<i<<endl;
                        cout<<"Size of population: "<<size<<endl;
                    }
                }
                break;
            }
            case 4: {
                cout<<"Random Number Guessing Game:\n";
                unsigned seed = time(0);
    
                //seed the random number generator
                srand(seed);
    
                //make a two digit number
                const int MAX_VALUE = 99; 
                const int MIN_VALUE = 1;
                int guess;
                int number = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    
                cout<<"Guess the number.\n";
                cin>>guess;
    
                while(guess!=number){
                    if (guess>number)
                        cout<<"Too high, try again.\n";
                    else
                        cout<<"Too low, try again.\n";
        
                cin>>guess;
                }
    
                cout<<"Congratulations! You guessed the number!\n";
                break;
            }
            case 5: {
                cout<<"Square Display:\n";
                int x;
                cout<<"Please enter a positive integer no greater than 15\n";
                cin>>x;
                if(x>0 && x<=15){
                    for(int i=0; i<x; i++){
                        for (int y=0; y<x; y++){
                            cout<<"X";
                        }
                        cout<<"\n";
                    }
                }
                else 
                    cout<<"Invalid user input\n";
                break;
            }
            case 6: {
                cout<<"Personal Webpage Generator";
                ofstream outputFile;
                string name, description;
                string readIn;
                cout<<"Enter your  name: ";
                cin.ignore();
                getline(cin, name);
                cout<<"Describe yourself: ";
                getline(cin, description);
    
                outputFile.open("webpage.html");
    
                outputFile<<"<html>\n<head>\n</head>\n<body>\n  <center>\n      <h1>";
                outputFile<<name<<"</h1\n   </center>\n    <hr />\n";
                outputFile<<description<<"\n    <hr />\n</body>\n</html>";
    
                cout<<"HTML with user input written to file 'webpage.html'\n";
                break;
            }
            case 7: {
                cout<<"Sizes:\n";
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
                break;
            }
            case 8: {
                cout<<"Beer Song";
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
                        cout<<"Zero bottles of beer on the wall.\n";
                     }
       
                    else {
                        if (i != 99)
                            cout<<number<<" bottles of beer on the wall.\n\n";
                        cout<<number<<" bottles of beer on the wall,\n";
                        cout<<number<<" bottles of beer,\n";
                        cout<<"Take one down, pass it around\n";
                    }
    
                }
                break;
            }
            case 9: {
                cout<<"Calories:\n";
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
    
                cout<<setprecision(2)<<fixed<<"You should eat "<<servings<<" servings.\n";
                break;
            }
            case 10:{
                cout<<"Vending Machine:\n";
                const int COST = 350; // twinkie costs $3.50, or 350 cents
                string coin;
                float coins;
                int change;
                int dimes, nickels, quarters;
    
                cout<<"A twinkie costs $3.50\n";
    
                do {
                    const int QUARTER = 25;
                    const int DIME = 10;
                    const int DOLLAR = 100;
                    const int NICKEL = 5;
                    cout<<"Insert coins; enter either 'dollar', 'quarter', 'dime, or 'nickel.' \n";
                    cin>>coin;
                    if (coin == "dollar")
                        coins += DOLLAR;
                    if (coin == "quarter")
                        coins += QUARTER;
                    if (coin == "dime")
                        coins += DIME;
                    if (coin == "nickel")
                        coins += NICKEL;
                    cout<<"You've inputted $"<<setprecision(2)<<fixed<<coins / 100<<endl;
                } while(coins < COST);
    
                cout<<"Enjoy your deep fried twinkie\n";
                change = calculateChange(coins);
                quarters = quartersChange(change);
                dimes = dimesChange(change);
                nickels = nickelsChange(change);
    
                cout<<"Your change will be give in: \n";
                cout<<quarters<<" quarter(s)\n";
                cout<<dimes<<" dime(s)\n";
                cout<<nickels<<" nickel(s).\n";
                break;
            }
            default:cout<<"You chose to exit."<<endl;
        }
    }while(option<=10 && option>=1);
    return 0;
}
//following four functions for Gaddis Chapter 5 Problem 8 i.e. case 2
addition(){

    
    int number1, number2;
    
    number1 = rand() % 1000;
    number2 = rand() % 1000;
    int sum;
    cout<<setw(5)<<number1<<endl;
    cout<<"+"<<setw(4)<<number2<<endl;
    cout<<"-----"<<endl<<endl;
    
    //calculate correct sum
    sum = number1 + number2;
    
    return sum;
    }

subtraction (){
 //initialize constants to keep random numbers from being too large
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 999;
    
    int number1, number2;
    
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    int difference;
    int greater, lesser;
    if (number1>=number2){
        greater = number1;
        lesser = number2;
    }
    else{
        greater = number2;
        lesser = number1;
    }
    cout<<setw(5)<<greater<<endl;
    cout<<"-"<<setw(4)<<lesser<<endl;
    cout<<"-----"<<endl<<endl;
    
    //calculate correct difference
    difference = greater - lesser;
    return difference;
}

multiplication (){
    const int MIN_VALUE = 1;
    const int MAX_VALUE =99;
    
    int number1, number2;
    int product;
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1 ) + MIN_VALUE);
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    
    cout<<setw(4)<<number1<<endl;
    cout<<"x"<<setw(3)<<number2<<endl;
    cout<<"----"<<endl<<endl;
    
    product = number1 * number2;
    return product;
}

division(){
    const int MIN_VALUE = 1;
    const int MAX_VALUE =99;
    
    int number1, number2;
    int product;
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1 ) + MIN_VALUE);
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    
    product = number1 * number2;
    
    cout<<setw(4)<<product<<" / "<<number1<<" = "<<endl;
    return number2;
}

//following two functions for Savitch Chapter 4 Problem 5 i.e. case 9
BMR(float P){
    int calories = 70 * pow((P / 2.2), 0.756);
    return calories;
}

physicalActivity(int intensity, float P, int minutes){
    int calories = 0.0385 * intensity * P * minutes;
    return calories;
}