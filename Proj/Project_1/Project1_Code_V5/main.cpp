
/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 1: Yahtzee 5.0
 * Created on January 28, 2018, 3:49 PM
 */
//System Libraries
#include <cstdlib>//used for rand
#include <iostream>
#include <ctime>//used to seed srand()
#include <iomanip>//used to format output with setw
#include <string>//used for strings
#include <cmath>//used for round() function
#include <fstream>//used for file I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
    //score needed to win
    const int WINNING = 200;
    //constants for the 13 yahtzee scoring categories
    const string ONE = "ones";
    const string TWO = "twos";
    const string THREE = "threes";
    const string FOUR = "fours";
    const string FIVE = "fives";
    const string SIX = "sixes";
    const string KIND3 = "three of a kind";
    const string KIND4 = "four of a kind";
    const string FULL = "full house";
    const string SMALLST = "small straight";
    const string LARGEST = "large straight";
    const string YAHTZEE = "yahtzee";
    const string CHANCE = "chance";
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0))); //type casting
    //declare variables
    int dice1, dice2, dice3, dice4, dice5;  //numbers rolled on dice
    int oneS, twoS, threeS, fourS, fiveS, sixS; //upper section Yahtzee scores
    int ones, twos, threes, fours, fives, sixes; //number of each number rolled in each round
    //whether or not each category has already been chosen
    bool oneC, twoC, threeC, fourC, fiveC, sixC, kind3C, kind4C, fullC, smStC, larStC, yahtzeC, chanceC;
    bool roll, roll1, roll2, roll3, roll4, roll5; //whether or not each die should be rolled again
    int kind3S, kind4S, fullS, smStS, larStS, yahtzeS, chanceS; //lower section Yahtzee scores
    int upper, total, bonus, score, rolls, formerScore; //scores, bonus score, and number of rolls used in round
    char r; //user-inputted character to roll the dice
    string choice;//user inputted scoring category
    ifstream inFile;
    ofstream outFile;
    //initialize bools at false so all categories are available
    oneC=twoC=threeC=fourC=fiveC=sixC=kind3C=kind4C=fullC=smStC=larStC=yahtzeC=chanceC=false; 
    //initialize category scores at 0
    oneS=twoS=threeS=fourS=fiveS=sixS=kind3S=kind4S=fullS=smStS=larStS=yahtzeS=chanceS=0;
    //opening message
    cout<<"You are playing the game of Yahtzee!\n";
    cout<<"If you get a score of 200 or higher, you win!\n";
    cout<<"Good luck!\n";
    cout<<"This is your last score. Try and beat it! \n";
    inFile.open("Project_1.txt"); //open the file
    inFile>>formerScore; //read in the last score recorded from the file
    cout<<formerScore<<endl; //output the score
    inFile.close();//close the file
    //do 13 rounds 
    for(int i = 1; i<=13; i++){ //for loop 
        ones=twos=threes=fours=fives=sixes=0;//start at 0 for each round
        roll1 = roll2 = roll3 = roll4 = roll5 = 1;//roll all the dice at beginning of each round
        rolls = 0;//set number of rolls to 0 for beginning of each round
        //roll the dice up to three times
        do{ 
            rolls++; 
            do{
                cout<<"Enter 'r' to roll the dice. Make sure you only enter one character.\n";
                cin>>r;
            }while(r!='r'&&r!='R'); //wait until user inputs r to roll dice
            //roll the dice, all of them at first and then whichever one the user wants to the next 2 times
            if (roll1)
                dice1 = rand()%6 + 1; //get a random number 1-6
            if (roll2)
                dice2 = rand()%6 + 1;//get a random number 1-6
            if (roll3)
                dice3 = rand()%6 + 1;//get a random number 1-6
            if (roll4)
                dice4 = rand()%6 + 1;//get a random number 1-6
            if (roll5)
                dice5 = rand()%6 + 1;//get a random number 1-6
            //output rolled numbers
            cout<<"You rolled:\n";
            cout<<"Dice 1:"<<setw(3)<<dice1<<endl;
            cout<<"Dice 2:"<<setw(3)<<dice2<<endl;
            cout<<"Dice 3:"<<setw(3)<<dice3<<endl;
            cout<<"Dice 4:"<<setw(3)<<dice4<<endl;
            cout<<"Dice 5:"<<setw(3)<<dice5<<endl;
            //allow user to roll again if he hasn't rolled 3 times yet
            if(rolls<3){
                cout<<"Would you like to reroll some dice? Enter 1 for yes and 0 for no\n";
                cin>>roll;//user input to roll again
                if(roll){ 
                    //allow user to choose which dice to reroll
                    cout<<"Which die would you like to reroll? Enter 1 for yes and 0 for no for each die, with a space between each\n";
                    cout<<"i.e. to roll dies 1, 2, and 5 but not reroll 3 and 4, type 1 1 0 0 1\n";
                    cout<<"make sure you only enter your answer in 0's and 1's\n";
                        cin>>roll1>>roll2>>roll3>>roll4>>roll5;
                }
                else{ //if they don't want to reroll, end the do while loop
                    rolls=4;
                }
            }
        }while(rolls<3);    
        cout<<"What category would you like to score in?\n";
        cout<<"These are your available categories to score in:\n";
        //list categories not already chosen
        if(!oneC)
            cout<<ONE<<endl;
        if(!twoC)
            cout<<TWO<<endl;
        if(!threeC)
            cout<<THREE<<endl;
        if(!fourC)
            cout<<FOUR<<endl;
        if(!fiveC)
            cout<<FIVE<<endl;
        if(!sixC)
            cout<<SIX<<endl;
        if(!kind3C)
            cout<<KIND3<<endl;
        if(!kind4C)
            cout<<KIND4<<endl;
        if(!fullC)
            cout<<FULL<<endl;
        if(!smStC)
            cout<<SMALLST<<endl;
        if(!larStC)
            cout<<LARGEST<<endl;
        if(!chanceC)
            cout<<CHANCE<<endl;
        if(!yahtzeC)
            cout<<YAHTZEE<<endl;
        //allow user to input category choice
        cin.ignore();
        getline(cin, choice);
        //while loop to validate user input
        while(choice!=ONE&&choice!=TWO&&choice!=THREE&&choice!=FOUR&&choice!=FIVE&&choice!=SIX&&choice!=KIND3&&
                choice!=KIND4&&choice!=FULL&choice!=SMALLST&&choice!=LARGEST&&choice!=CHANCE&&choice!=YAHTZEE){
                cout<<"Invalid category choice. Enter again.\n";
                getline(cin, choice);
        }
        //see how many of each number was rolled on the dice
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
            case 2:twos++;
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
        //score the roll according to the user inputted choice, and cross the category off available category list
        //dependent if / if else
        if(choice == ONE){
            oneS=ones; //score is how many ones were rolled
            score = oneS;
            oneC = true;//category is chosed, don't list as available (this occurs at the end of each category)
        }
        else if (choice == TWO){
            twoS=twos * 2;//score is sum of all twos rolled
            score=twoS;
            twoC = true;
        }
        else if (choice == THREE){
            threeS=threes * 3;//score is sum of all three rolled
            score=threeS;
            threeC = true;
        }
        else if (choice == FOUR){
            fourS=fours * 4;//score is sum of all fours rolled
            score=fourS;
            fourC = true;
        }
        else if (choice ==FIVE){
            fiveS=fives * 5;//score is sum of all fives rolled
            score=fiveS;
            fiveC = true;
        }
        else if (choice == SIX){
            sixS=sixes * 6;//score is sum of all sixes
            score=sixS;
            sixC = true;
        }
        else if (choice == KIND3){
            if(ones>2||twos>2||threes>2||fours>2||fives>2||sixes>2) //see if there are three or more of one number
                kind3S=dice1+dice2+dice3+dice4+dice5; //if there are three of a kind, score is sum of all die
            //otherwise score is zero
            score=kind3S;        
            kind3C=true;
        }
        else if (choice == KIND4){
            if (ones>3||twos>3||threes>3||fours>3||fives>3||sixes>3)//see if there are four or more of one number
                kind4S=dice1+dice2+dice3+dice4+dice5;//if there are four of a kind, score is sum of all die
            //otherwise, score is zero
            score=kind4S;
            kind4C = true;
        }
        else if (choice == SMALLST){
            if((ones>0&&twos>0&&threes>0&&fours>0)||
               (twos>0&&threes>0&&fours>0&&fives>0)||
               (threes>0&&fours>0&&fives>0&&sixes>0))//see if there is a 1-2-3-4 straight
                smStS=30;//if so, score is 30
            //otherwise score is zero
            score=smStS;
            smStC=true;
        }
        else if (choice == LARGEST){
            if((ones>0&&twos>0&&threes>0&&fours>0&&fives>0)||(twos>0&&threes>0&&fours>0&&fives>0&&sixes>0))//see if there is a 1-2-3-4-5 straight
                larStS=40;//if so score is 40
            //otherwise score is zero
            score=larStS;
            larStC= true;
        }
        else if (choice ==FULL){
            //see if there is 3 of one number and two of another
            //if so, score is 25
            //otherwise, score is zero
            if((ones==3&&(twos==2||threes==2||fours==2||fives==2||sixes==2))||
                    (twos==3&&(ones==2||threes==2||fours==2||fives==2||sixes==2))||
                    (threes==3&&(ones==2||twos==2||fours==2||fives==2||sixes==2))||
                    (fours==3&&(ones==2||twos==2||threes==2||fives==2||sixes==2))||
                    (fives==3&&(ones==2||twos==2||threes==2||fours==2||sixes==2))||
                    (sixes==3&&(ones==2||twos==2||threes==2||fours==2||fives==2)))
                    fullS=25;
            score=fullS;
            fullC = true;
        }
        else if (choice == CHANCE){
            chanceS=dice1+dice2+dice3+dice4+dice5;//score is sum of all die
            score=chanceS;
            chanceC=true;
        }
        else if (choice == YAHTZEE){
            if(ones==5||twos==5||threes==5||fours==5||fives==5||sixes==5)
                yahtzeS=50;//score is 50 if there are five of the same number
            //otherwise score is zero
            score=yahtzeS;
            yahtzeC=true;
        }
        //output score
        cout<<"Category: "<<choice<<"       Score: "<<score<<endl;
    }
    upper = oneS + twoS + threeS + fourS + fiveS + sixS; //find upper score total
    bonus = upper>62?35:0;//if the upper total is greater than 62, than user receives a 35 point bonus
    total = upper + fullS + smStS + larStS + chanceS + yahtzeS + bonus;//find total score
    //output all categories and the scores they received
    cout<<"Category "<<setw(15)<<"Score"<<endl;
    cout<<" "<<ONE<<setw(20)<<oneS<<endl;
    cout<<" "<<TWO<<setw(20)<<twoS<<endl;
    cout<<" "<<THREE<<setw(18)<<threeS<<endl;
    cout<<" "<<FOUR<<setw(19)<<fourS<<endl;
    cout<<" "<<FIVE<<setw(19)<<fiveS<<endl;
    cout<<" "<<SIX<<setw(19)<<sixS<<endl;
    cout<<" Upper Total: "<<setw(11)<<upper<<endl;
    cout<<" Bonus: "<<setw(17)<<bonus<<endl;
    cout<<" "<<KIND3<<setw(9)<<kind3S<<endl;
    cout<<" "<<KIND4<<setw(10)<<kind4S<<endl;
    cout<<" "<<FULL<<setw(14)<<fullS<<endl;
    cout<<" "<<SMALLST<<setw(10)<<smStS<<endl;
    cout<<" "<<LARGEST<<setw(10)<<larStS<<endl;
    cout<<" "<<CHANCE<<setw(18)<<chanceS<<endl;
    cout<<" "<<YAHTZEE<<setw(17)<<yahtzeS<<endl;
    //output total score
    cout<<endl<<"Your total score: "<<total;
    //output average score in each category
    cout<<" Your average score in each category: ";
    //use of float is below
    cout<<round(static_cast<float>(total - bonus) / 13)<<endl;
    //if total score is 200 or better, user wins
    //otherwise, player loses
    if(total>=WINNING)
        cout<<" Congrats! You got a score of 200 or more and won!\n";
    else
        cout<<" Sorry; your score was less than 200. You lost.\n";
    outFile.open("Project_1.txt");
    //save score in file. to be displayed at beginning of next game
    outFile<<total;
    outFile.close();
    return 0;
}
