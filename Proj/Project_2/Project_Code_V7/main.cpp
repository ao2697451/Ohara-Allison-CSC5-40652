/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 2: Yahtzee 7.0 (continued from project 1)
 * 
 * Created on February 5, 2018, 2:54 PM
 */
//System Libraries
#include <cstdlib>//used for rand
#include <iostream>
#include <ctime>//used to seed srand()
#include <iomanip>//used to format output with setw
#include <string>//used for strings
#include <cmath>//used for round() function
#include <fstream>//used for file I/O
#include <vector>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void bubbleSort(int[], int, string[]);
void swap(int &a, int &b);
void swapString(string &a, string &b);
void turn(int &scores[], bool &chosen[], int);
int linearSearch(string [], int, string);
bool yesNo(char);
int main(int argc, char** argv) {
    //score needed to win
    const int WINNING = 200;
    int upper, total, bonus, past, arsize, position, player; //scores, bonus score, and number of rolls used in round
    string player;
    int scores[2][13];
    bool chosen [2][13];
    //vectors to temporarily hold the past scores and players' names, and find the number of scores
    vector<int>hscores; 
    vector<string>hplayer;
    ifstream inFile;
    ofstream outFile;
    //initialize bools at false so all categories are available
    //initialize category scores at zero
    //opening message
    cout<<"You are playing the game of Yahtzee!\n";
    cout<<"If you get a score of 200 or higher, you win!\n";
    cout<<"Good luck!\n";
    cout<<"This is your last score. Try and beat it! \n";
    inFile.open("Project_1.txt"); //open the file
    //take names and scores from file and place them in vectors
    while(inFile>>player>>past){
        hplayer.push_back(player);
        hscores.push_back(past);
    }
    inFile.close();//close the file
    //find the size the array needs to be by finding the size of the vector
    arsize = hplayer.size();
    //declare arrays for score board
    int fScores[arsize];
    string players[arsize];
    //transfer scores form vectors to parallel arrays
    for(int i = 0; i<arsize; i++){
        fScores[i]=hscores[i];
        players[i]=hplayer[i];
    }
    //sort the arrays in descending order of scores
    bubbleSort(fScores, arsize, players);
    cout<<"Score Board"<<endl;
    for(int i = 0; i<arsize; i++)
        cout<<setw(8)<<players[i]<<setw(10)<<fScores[i]<<endl;
    cout<<"What is your first name?\n";
    cin>>player;
    //search for the player's name in the score board
    position = linearSearch(players, arsize, player);
    if(position!=-1){
        cout<<"You've played before. This was your last score: "<<fScores[position]<<endl;
    }
    else
        cout<<"You haven't played before. Good luck on your first run!\n";
    //do 13 rounds 
    for(int i = 1; i<=13; i++){ //for loop 
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
    outFile.open("Project_1.txt", ios::app); //add to end of existing file
    //save score in file. to be displayed at beginning of next game
    outFile<<player<<" "<<total<<endl;
    outFile.close();
    return 0;
}
void bubbleSort(int list[], int size, string list2[]){
    int maxElement;
    int index;
    for(maxElement=size-1; maxElement>0; maxElement--){
        for(index = 0; index<maxElement; index++){
            if(list[index]<list[index+1]){
                swap(list[index],list[index+1]);
                swapString(list2[index],list2[index+1]);
            }
        }
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swapString (string &a, string&b){
    string temp = a;
    a = b;
    b= temp;
}
int linearSearch (string list[], int size, string name){
    int index = 0;
    int position = -1;
    bool found = false;
    
    while(index<size&& !found)
    {
        if(list[index]==name){
            found=true;
            position = index;
        }
        index++;
    }
    return position;
}

void turn (int &scores[], bool &chosen[], int player){
    //constants for the 13 yahtzee scoring categories
    const string cats[13] = {"ones", "twos", "threes", "fours", "fives", "sixes", "three of a kind",
    "four of a kind", "full house", "small straight", "large straight", "yahtzee", "chance"};
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0))); //type casting
    //declare variables
    int dice1, dice2, dice3, dice4, dice5;  //numbers rolled on dice
    int ones, twos, threes, fours, fives, sixes, rolls, score; //number of each number rolled in each round
    //whether or not each category has already been chosen
    bool roll, roll1, roll2, roll3, roll4, roll5; //whether or not each die should be rolled again
    char r, answer;
    string choice;
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
                cout<<"Would you like to reroll some dice? Enter y for yes and 0 for no\n";
                cin>>roll;//user input to roll again
                if(roll){ 
                    //allow user to choose which dice to reroll
                    cout<<"Would you like to reroll die 1? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll1 = yesNo(answer);
                    cout<<"Would you like to reroll die 2? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll2 = yesNo(answer);
                    cout<<"Would you like to reroll die 3? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll3 = yesNo(answer);
                    cout<<"Would you like to reroll die 4? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll4 = yesNo(answer);
                    cout<<"Would you like to reroll die 5? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll5 = yesNo(answer);
                }
                else{ //if they don't want to reroll, end the do while loop
                    rolls=4;
                }
            }
        }while(rolls<3);    
        cout<<"What category would you like to score in?\n";
        cout<<"These are your available categories to score in:\n";
        //list categories not already chosen
        for(short i=0; i<13; i++){
            if(!chosen[player][i])
                cout<<cats[i]<<endl;
        }
        //allow user to input category choice
        cin.ignore();
        getline(cin, choice);
        //while loop to validate user input
        while(choice!=cats[0]&&choice!=cats[1]&&choice!=cats[2]&&choice!=cats[3]&&choice!=cats[4]&&choice!=cats[5]&&choice!=cats[6]&&
                choice!=cats[7]&&choice!=cats[8]&choice!=cats[9]&&choice!=cats[10]&&choice!=cats[11]&&choice!=cats[12]){
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
        
        if(choice == cats[0]){
            scores[player][0]=ones; //score is how many ones were rolled
            score = scores[player][0];
            chosen[player][0] = true;//category is chosed, don't list as available (this occurs at the end of each category)
        }
        else if (choice == cats[1]){
            scores[player][1]=twos * 2;//score is sum of all twos rolled
            score=scores[player][1];
            chosen[player][1] = true;
        }
        else if (choice == cats[2]){
            scores[player][2]=threes * 3;//score is sum of all three rolled
            score=scores[player][2];
            chosen[player][2] = true;
        }
        else if (choice == cats[3]){
            scores[player][3]=fours * 4;//score is sum of all fours rolled
            score=scores[player][3];
            chosen[player][3] = true;
        }
        else if (choice == cats[4]){
            scores[player][4]=fives * 5;//score is sum of all fives rolled
            score=scores[player][4];
            chosen[player][4]= true;
        }
        else if (choice == cats[5]){
            scores[player][5]=sixes * 6;//score is sum of all sixes
            score=scores[player][5];
            chosen[player][6]= true;
        }
        else if (choice == cats[6]){
            if(ones>2||twos>2||threes>2||fours>2||fives>2||sixes>2) //see if there are three or more of one number
                scores[player][6]=dice1+dice2+dice3+dice4+dice5; //if there are three of a kind, score is sum of all die
            //otherwise score is zero
            score=scores[player][6];        
            chosen[player][6]=true;
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

bool yesNo(char answer){
    bool yes = false;
    while(answer!='n'&&answer!='N'&&answer!='y'&&answer!='Y'){
        cout<<"Invalid entry. Enter y for yes or n for no.";
        cin>>answer;
    }
    if(answer=='y'||answer=='Y')
        yes = true;
    return yes;
}