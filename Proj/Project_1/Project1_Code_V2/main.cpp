/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Yahtzee Project 2.0
 * Created on January 24, 2018, 8:13 PM
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
    bool oneC, twoC, threeC, fourC, fiveC, sixC, kind3C, kind4C, fullC, smStC, larStC, yahtzeC, chanceC;
    int kind3S, kind4S, fullS, smStS, larStS, yahtzeS, chanceS; //lower section Yahtzee scores
    int upper, total, bonus, score, rolls;
    string choice;
    oneC=twoC=threeC=fourC=fiveC=sixC=kind3C=kind4C=fullC=smStC=larStC=yahtzeC=chanceC=false;
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
    for(int i = 1; i<=13; i++){ //for loop
        cout<<"Press the enter key to roll the five dice\n";
        if( i>1) //independent if
            cin.ignore();
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
        cout<<"These are your available categories to score in:\n";
        
        if(!oneC)
            cout<<one<<endl;
        if(!twoC)
            cout<<two<<endl;
        if(!threeC)
            cout<<three<<endl;
        if(!fourC)
            cout<<four<<endl;
        if(!fiveC)
            cout<<five<<endl;
        if(!sixC)
            cout<<six<<endl;
        if(!kind3C)
            cout<<kind3<<endl;
        if(!kind4C)
            cout<<kind4<<endl;
        if(!fullC)
            cout<<full<<endl;
        if(!smStC)
            cout<<smallSt<<endl;
        if(!larStC)
            cout<<largeSt<<endl;
        if(!chanceC)
            cout<<chance<<endl;
        if(!yahtzeC)
            cout<<yahtzee<<endl;
        getline(cin, choice);
        cout<<"What score did you get?\n";
        cin>>score;
        //dependent if / if elses
        if(choice == one){
            oneS=score;
            oneC = true;
        }
        else if (choice == two){
            twoS=score;
            twoC = true;
        }
        else if (choice == three){
            threeS=score;
            threeC = true;
        }
        else if (choice == four){
            fourS=score;
            fourC = true;
        }
        else if (choice ==five){
            fiveS=score;
            fiveC = true;
        }
        else if (choice == six){
            sixS=score;
            sixC = true;
        }
        else if (choice == kind3){
            kind3S=score;
            kind3C=true;
        }
        else if (choice == kind4){
            kind4S=score;
            kind4C = true;
        }
        else if (choice == smallSt){
            smStS=score;
            smStC=true;
        }
        else if (choice == largeSt){
            larStS=score;
            larStC= true;
        }
        else if (choice ==full){
            fullS=score;
            fullC = true;
        }
        else if (choice == chance){
            chanceS=score;
            chanceC=true;
        }
        else if (choice == yahtzee){
            yahtzeS=score;
            yahtzeC=true;
        }
        cout<<"Category: "<<choice<<"       Score: "<<score<<endl;
    }
    upper = oneS + twoS + threeS + fourS + fiveS + sixS;
    total = upper + fullS + smStS + larStS + chanceS + yahtzeS;
    cout<<"Category "<<setw(15)<<"Score"<<endl;
    cout<<" "<<one<<setw(20)<<oneS<<endl;
    cout<<" "<<two<<setw(20)<<twoS<<endl;
    cout<<" "<<three<<setw(18)<<threeS<<endl;
    cout<<" "<<four<<setw(19)<<fourS<<endl;
    cout<<" "<<five<<setw(19)<<fiveS<<endl;
    cout<<" "<<six<<setw(19)<<sixS<<endl;
    cout<<" Upper Total: "<<setw(11)<<upper<<endl;
    cout<<" "<<kind3<<setw(9)<<kind3S<<endl;
    cout<<" "<<kind4<<setw(10)<<kind4S<<endl;
    cout<<" "<<full<<setw(14)<<fullS<<endl;
    cout<<" "<<smallSt<<setw(10)<<smStS<<endl;
    cout<<" "<<largeSt<<setw(10)<<larStS<<endl;
    cout<<" "<<chance<<setw(18)<<chanceS<<endl;
    cout<<" "<<yahtzee<<setw(17)<<yahtzeS<<endl;
    cout<<endl<<"Your total score: "<<total;
    return 0;
}