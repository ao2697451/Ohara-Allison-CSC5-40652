/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 1: Yahtzee
 * Created on January 23, 2018, 1:05 PM
 */

#include <cstdlib> //rand
#include <iostream>
#include <ctime> //seed the random number generator
#include <string>
#include <iomanip>

//User Libraries

//Global Constants

//Function Prototypes

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //declare variables
    int dice1, dice2, dice3, dice4, dice5;
    int oneS, twoS, threeS, fourS, fiveS, sixS; //upper section Yahtzee scores
    int kind3S, kind4S, fullS, smStS, larStS, yahtzeS, chanceS; //lower section Yahtzee scores
    int upper, lower, bonus, score, rolls;
    string choice;
    string one = "ones";
    string two = "twos";
    string three = "threes";
    string four = "fours";
    string five = "fives";
    string six = "sixes";
    string kind3 = "three of a kind";
    string kind4 = "four of a kind";
    string full = "full house";
    string smallSt = "small straight";
    string largeSt = "large straight";
    string yahtzee = "yahtzee";
    string chance = "chance";
    for(int i = 1; i<= 13; i++){
        cout<<"Press the enter key to roll the five dice";
        cin.get();
        dice1 = rand()%6 + 1;
        dice2 = rand()%6 + 1;
        dice3 = rand()%6 + 1;
        dice4 = rand()%6 + 1;
        dice5 = rand()%6 + 1;
        rolls = 1;
        cout<<"You rolled:\n";
        cout<<"Dice 1:"<<setw(3)<<dice1<<endl;
        cout<<"Dice 2:"<<setw(3)<<dice2<<endl;
        cout<<"Dice 3:"<<setw(3)<<dice3<<endl;
        cout<<"Dice 4:"<<setw(3)<<dice4<<endl;
        cout<<"Dice 5:"<<setw(3)<<dice5<<endl;
        cout<<"What category would you like to score in?\n";
        cout<<"Enter ones, twos, threes, fours, fives, sixes, three of a kind, four of a kind\n"<<endl;
        cout<<"full house, chance, small straight, large straight, or yahtzee.\n";
        cin>>choice;
        cout<<"What is your score in this category? ";
        cin>>score;
        cout<<choice<<": "<<score<<endl;
    }
    return 0;
}

