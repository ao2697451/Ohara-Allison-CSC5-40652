/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 6 Problem 24 "Rock Paper Scissors Game"
 * Created on January 27, 2018, 2:02 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
//User Libraries;

//Global Variables

//Function Prototypes 
string getComputer();
string winner(string, string);
bool findTie(string, string);
int main(int argc, char** argv) {
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));    
    //declare variables
    string choice;
    string computerChoice;
    string winSpeech;
    bool tie = false;
    do{
        computerChoice=getComputer();
        cout<<"What is your choice? Rock, paper or scissors?\n";
        cout<<"Enter your number in all lowercase letters\n";
        cin>>choice;
        cout<<"The computer chose "<<computerChoice<<endl;
        tie = findTie(choice, computerChoice);
        winSpeech = winner(choice, computerChoice);
        cout<<winSpeech<<endl;
    }while(tie);
    return 0;
}
string getComputer(){
    const int MIN = 1;
    const int MAX = 3;
    int num;
    string choice;
    num = rand()%3 + 1;
    if (num==1)
        choice = "rock";
    else if(num==2)
        choice = "paper";
    else
        choice = "scissors";
    return choice;
}
bool findTie(string choice, string computerChoice){
    bool tie;
    if(computerChoice==choice)
        tie = true;
    return tie;
}
string winner (string choice, string computerChoice){
    const string ROCK = "rock";
    const string PAPER = "paper";
    const string SCISSORS = "scissors";
    const string PLAYER_WINS = "Congratulations! You win!\n";
    const string COMPUTER_WINS = "Sorry, you lost. The computer wins.\n";
    const string TIE = "You tied. Your game will replay until one of you wins\n";
    string winSpeech;
    if(choice == ROCK){
            if (computerChoice==PAPER)
                winSpeech = COMPUTER_WINS;
            else if (computerChoice==SCISSORS)
                winSpeech = PLAYER_WINS;
            else
                winSpeech = TIE;
        }
        else if (choice == PAPER){
            if(computerChoice==SCISSORS)
                winSpeech=COMPUTER_WINS;
            else if(computerChoice==ROCK)
                winSpeech = PLAYER_WINS;
            else
                winSpeech = TIE;
        }
        else{
            if(computerChoice==ROCK)
                winSpeech = COMPUTER_WINS;
            else if (computerChoice==PAPER)
                winSpeech = PLAYER_WINS;
            else 
                winSpeech = TIE;
        }
    return winSpeech;
}