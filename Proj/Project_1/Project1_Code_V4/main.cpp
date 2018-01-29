/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 1: Yahtzee 4.0
 * Created on January 26, 2018, 10:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int WINNING = 200;
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    int dice1, dice2, dice3, dice4, dice5;
    int oneS, twoS, threeS, fourS, fiveS, sixS; //upper section Yahtzee scores
    int ones, twos, threes, fours, fives, sixes;
    bool oneC, twoC, threeC, fourC, fiveC, sixC, kind3C, kind4C, fullC, smStC, larStC, yahtzeC, chanceC;
    bool roll, roll1, roll2, roll3, roll4, roll5;
    ones=twos=threes=fours=fives=sixes=0;
    int kind3S, kind4S, fullS, smStS, larStS, yahtzeS, chanceS; //lower section Yahtzee scores
    int upper, total, bonus, score, rolls;
    string choice;
    oneC=twoC=threeC=fourC=fiveC=sixC=kind3C=kind4C=fullC=smStC=larStC=yahtzeC=chanceC=false;
    oneS=twoS=threeS=fourS=fiveS=sixS=kind3S=kind4S=fullS=smStS=larStS=yahtzeS=chanceS=0;
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
    cout<<"You are playing the game of Yahtzee!\n";
    cout<<"If you get a score of 200 or higher, you win!\n";
    cout<<"Good luck!\n";
    for(int i = 1; i<=13; i++){ //for loop
        ones=twos=threes=fours=fives=sixes=0;
        roll1 = roll2 = roll3 = roll4 = roll5 = 1;
        rolls = 0;
        do{
            rolls++;
        cout<<"Press the enter key to roll the dice.\n";
        cin.get();
        if (roll1)
            dice1 = rand()%6 + 1;
        if (roll2)
            dice2 = rand()%6 + 1;
        if (roll3)
            dice3 = rand()%6 + 1;
        if (roll4)
            dice4 = rand()%6 + 1;
        if (roll5)
            dice5 = rand()%6 + 1;
        cout<<"You rolled:\n";
        cout<<"Dice 1:"<<setw(3)<<dice1<<endl;
        cout<<"Dice 2:"<<setw(3)<<dice2<<endl;
        cout<<"Dice 3:"<<setw(3)<<dice3<<endl;
        cout<<"Dice 4:"<<setw(3)<<dice4<<endl;
        cout<<"Dice 5:"<<setw(3)<<dice5<<endl;
        cout<<rolls<<endl;
        if(rolls<3){
            cout<<"Would you like to reroll some dice? Enter 1 for yes and 0 for no\n";
            cin>>roll;
            if(roll){
                cout<<"Would you like to reroll dice 1? Enter 1 for yes and 0 for no\n";
                cin>>roll1;
                cout<<"Would you like to reroll dice 2? Enter 1 for yes and 0 for no\n";
                cin>>roll2;
                cout<<"Would you like to reroll dice 3? Enter 1 for yes and 0 for no\n";
                cin>>roll3;
                cout<<"Would you like to reroll dice 4? Enter 1 for yes and 0 for no\n";
                cin>>roll4;
                cout<<"Would you like to reroll dice 5? Enter 1 for yes and 0 for no\n";
                cin>>roll5;
            }
            else{
                rolls=4;
            }
        }
        }while(rolls<3);    
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
        //while loop to validate user input
        while(choice!=one&&choice!=two&&choice!=three&&choice!=four&&choice!=five&&choice!=six&&choice!=kind3&&
                choice!=kind4&&choice!=full&choice!=smallSt&&choice!=largeSt&&choice!=chance&&choice!=yahtzee){
            cout<<"Invalid category choice. Enter again.\n";
            getline(cin, choice);
        }
        switch(dice1){
            case 1:ones++;
            break;
            case 2: twos++;
            break;
            case 3:threes++;
            break;
            case 4: fours++;
            break;
            case 5: fives++;
            break;
            case 6: sixes++;
            break;
        }
        switch(dice2){
            case 1:ones++;
            break;
            case 2: twos++;
            break;
            case 3:threes++;
            break;
            case 4: fours++;
            break;
            case 5: fives++;
            break;
            case 6: sixes++;
            break;
        }
        switch(dice3){
            case 1:ones++;
            break;
            case 2: twos++;
            break;
            case 3:threes++;
            break;
            case 4: fours++;
            break;
            case 5: fives++;
            break;
            case 6: sixes++;
            break;
        }
        switch(dice4){
            case 1:ones++;
            break;
            case 2: twos++;
            break;
            case 3:threes++;
            break;
            case 4: fours++;
            break;
            case 5: fives++;
            break;
            case 6: sixes++;
            break;
        }    
        switch(dice5){
            case 1:ones++;
            break;
            case 2: twos++;
            break;
            case 3:threes++;
            break;
            case 4: fours++;
            break;
            case 5: fives++;
            break;
            case 6: sixes++;
            break;
        }     
        //dependent if / if else
        if(choice == one){
            oneS=ones;
            score = oneS;
            oneC = true;
        }
        else if (choice == two){
            twoS=twos * 2;
            score=twoS;
            twoC = true;
        }
        else if (choice == three){
            threeS=threes * 3;
            score=threeS;
            threeC = true;
        }
        else if (choice == four){
            fourS=fours * 4;
            score=fourS;
            fourC = true;
        }
        else if (choice ==five){
            fiveS=fives * 5;
            score=fiveS;
            fiveC = true;
        }
        else if (choice == six){
            sixS=sixes * 6;
            score=sixS;
            sixC = true;
        }
        else if (choice == kind3){
            if(ones>2||twos>2||threes>2||fours>2||fives>2||sixes>2)
                kind3S=dice1+dice2+dice3+dice4+dice5;
            score=kind3S;        
            kind3C=true;
        }
        else if (choice == kind4){
            if (ones>3||twos>3||threes>3||fours>3||fives>3||sixes>3)
                kind4S=dice1+dice2+dice3+dice4+dice5;
            score=kind4S;
            kind4C = true;
        }
        else if (choice == smallSt){
            if(ones>0&&twos>0&&threes>0&&fours>0)
                smStS=30;
            else if (twos>0&&threes>0&&fours>0&&fives>0)
                smStS=30;
            else if(threes>0&&fours>0&&fives>0&&sixes>0)
                smStS=30;
            score=smStS;
            smStC=true;
        }
        else if (choice == largeSt){
            if(ones>0&&twos>0&&threes>0&&fours>0&&fives>0)
                larStS=40;
            else if(twos>0&&threes>0&&fours>0&&fives>0&&sixes>0)
                larStS=40;
            score=larStS;
            larStC= true;
        }
        else if (choice ==full){
            if(ones==3){
                if(twos==2||threes==2||fours==2||fives==2||sixes==2)
                    fullS=25;
            }
            else if(twos==3){
                if(ones==2||threes==2||fours==2||fives==2||sixes==2)
                    fullS=25;
            }
            else if(threes==3){
                if(ones==2||twos==2||fours==2||fives==2||sixes==2)
                    fullS=25;
            }
            else if(fours==3){
                if(ones==2||twos==2||threes==2||fives==2||sixes==2)
                    fullS=25;
        }
            else if(fives==3){
                if(ones==2||twos==2||threes==2||fours==2||sixes==2)
                    fullS=25;
            }
            else if(sixes==3){
                if(ones==2||twos==2||threes==2||fours==2||fives==2)
                    fullS=25;
            }
            score=fullS;
            fullC = true;
        }
        else if (choice == chance){
            chanceS=dice1+dice2+dice3+dice4+dice5;
            score=chanceS;
            chanceC=true;
        }
        else if (choice == yahtzee){
            if(ones==5||twos==5||threes==5||fours==5||fives==5||sixes==5)
                yahtzeS=50;
            score=yahtzeS;
            yahtzeC=true;
        }
        cout<<"Category: "<<choice<<"       Score: "<<score<<endl;
    }
    upper = oneS + twoS + threeS + fourS + fiveS + sixS;
    total = upper + fullS + smStS + larStS + chanceS + yahtzeS;
    bonus = upper>62?35:0;
    cout<<"Category "<<setw(15)<<"Score"<<endl;
    cout<<" "<<one<<setw(20)<<oneS<<endl;
    cout<<" "<<two<<setw(20)<<twoS<<endl;
    cout<<" "<<three<<setw(18)<<threeS<<endl;
    cout<<" "<<four<<setw(19)<<fourS<<endl;
    cout<<" "<<five<<setw(19)<<fiveS<<endl;
    cout<<" "<<six<<setw(19)<<sixS<<endl;
    cout<<" Upper Total: "<<setw(11)<<upper<<endl;
    cout<<" Bonus: "<<setw(20)<<bonus<<endl;
    cout<<" "<<kind3<<setw(9)<<kind3S<<endl;
    cout<<" "<<kind4<<setw(10)<<kind4S<<endl;
    cout<<" "<<full<<setw(14)<<fullS<<endl;
    cout<<" "<<smallSt<<setw(10)<<smStS<<endl;
    cout<<" "<<largeSt<<setw(10)<<larStS<<endl;
    cout<<" "<<chance<<setw(18)<<chanceS<<endl;
    cout<<" "<<yahtzee<<setw(17)<<yahtzeS<<endl;
    cout<<endl<<"Your total score: "<<total;
    if(total>=WINNING)
        cout<<"Congrats! You got a score of 200 or more and won!\n";
    else
        cout<<"Sorry; your score was less than 200. You lost.\n";
    return 0;
}