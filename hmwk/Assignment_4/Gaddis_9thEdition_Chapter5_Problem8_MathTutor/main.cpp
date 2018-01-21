/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 5 Problem 8 "Math Tutor"
 * Created on January 19, 2018, 4:18 PM
 */

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int addition();
int subtraction();
int multiplication();
int division();

menu(){
    cout<<"1. Addition Problem\n";
    cout<<"2. Subtraction Problem\n";
    cout<<"3. Multiplication Problem\n";
    cout<<"4. Division Problem\n";
    cout<<"5. Quit\n";
    cout<<"Select one and enter the corresponding number.\n";    
}
int main(int argc, char** argv) {
    
    //declare variables
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
        
        default: return 0;
        break;
       
    }
    cin>>inputAnswer;
    if(answer == inputAnswer){
        cout<<"Correct!\n";
    }
    else {
        cout<<"That is incorrect.\n";
        cout<<"The correct answer is: "<<answer<<endl;
    }
    }while (choice!=5);
    return 0;
}

addition(){
 //initialize constants to keep random numbers from being too large
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 999;
    
    int number1, number2;
    
    number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
    number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
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
        number1 = greater;
        number2 = lesser;
    }
    else{
        number2 = greater;
        number1 = lesser;
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