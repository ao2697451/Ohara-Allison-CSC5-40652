/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 2: Yahtzee 9.0 (continued from project 1)
 * Main additions (from 8.0): inclusion of all topics required in checklist, more comments,
 * working one and two player modes, debugging, etc.
 * Updated on February 7, 2018, 10:43 a.m.
 */
//System Libraries
#include <cstdlib>//used for rand
#include <iostream>
#include <ctime>//used to seed srand()
#include <iomanip>//used to format output with setw
#include <string>//used for strings
#include <cmath>//used for round() function
#include <fstream>//used for file I/O
#include <vector> //used for vectors
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void bubbleSort(vector<int>&, int, vector<string>&);
void swap(int &a, int &b);
void swap(string &a, string &b);
void turn(int (&scores)[2][13], const string[], vector<string> name, int player = 0);
int linearSearch(vector<string>, int, string);
bool yesNo(char);
void selectionSort(vector<int> &, int, vector<string> &);

int main(int argc, char** argv) {
    //declare variables and constants
    //score needed to win
    const int WINNING = 225;
    //constants for the 13 yahtzee scoring categories
    const string cats[13] = {"ones", "twos", "threes", "fours", "fives", "sixes", "three of a kind",
        "four of a kind", "small straight", "large straight", "full house", "chance", "yahtzee"};
    //upper totals, bonuses, total scores, size of vector, and position
    int upper, total, bonus, past, arsize, position;
    int upper2, total2, bonus2;
    string player, name;
    char num;
    //initialize two dimensional array with scores all at zero
    int scores[2][13] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    }; //initialize at zero
    //vectors to hold the past scores, past names, current names
    vector<int>fScores;
    vector<string>names;
    vector<string>players;
    ifstream inFile;
    ofstream outFile;
    //initialize bools at false so all categories are available
    //initialize category scores at zero
    //opening message
    cout << "You are playing the game of Yahtzee!\n";
    cout << "Good luck!\n";
    inFile.open("Project_2.txt"); //open the in file
    outFile.open("Project_2.txt", ios::app); //open existing out file   
    //take names and scores from file and place them in vectors
    while (inFile >> player >> past) {
        players.push_back(player);
        fScores.push_back(past);
    }
    inFile.close(); //close the file
    //find the size the array needs to be by finding the size of the vector
    arsize = players.size();
    //sort the vectors in descending order
    bubbleSort(fScores, arsize, players);
    //display the score board
    cout << "Score Board" << endl;
    for (int i = 0; i < arsize; i++)
        cout << setw(8) << players[i] << setw(10) << fScores[i] << endl;
    //get the name of the player
    cout << "What is your name, Player One?" << endl;
    cin>>name;
    //put the name of the player in a vector
    names.push_back(name);
    //search for the player's name in the score board
    position = linearSearch(players, arsize, names[0]);
    if (position != -1) {
        //if player has won before, display previous score
        cout << "You've won before. This was your last score: " << fScores[position] << endl;
    } else
        cout << "You haven't won before. Good luck!\n";
    //see if there is a second player
    cout << "Is there a second player? Enter y for yes and any other character for no\n";
    cin>>num;
    //if so, get second player's name and search for it in Scoreboard
    if (num == 'y' || num == 'Y') {
        cout << "What is your name, Player Two?" << endl;
        cin>>name;
        names.push_back(name);
        //search for the player's name in the score board
        position = linearSearch(players, arsize, names[1]);
        if (position != -1) {
            cout << "You've won before. This was your last score: " << fScores[position] << endl;
        } else
            cout << "You haven't won before. Good luck!\n";
    }
    //do 13 rounds 
    for (int i = 0; i < 13; i++) { //for loop 
        //first player's turn
        turn(scores, cats, names);
        //second player's turn
        turn(scores, cats, names, 1);
    }
    upper2 = scores[1][0] + scores[1][1] + scores[1][2] + scores[1][3] + scores[1][4] + scores[1][5]; //find upper score total
    upper = scores[0][0] + scores[0][1] + scores[0][2] + scores[0][3] + scores[0][4] + scores[0][5];
    bonus = upper > 62 ? 35 : 0; //if the upper total is greater than 62, than user receives a 35 point bonus
    bonus2 = upper2 > 62 ? 35 : 0;
    total = upper + scores[0][6] + scores[0][7] + scores[0][8] + scores[0][9] + scores[0][10] + scores[0][11] + scores[0][12] + bonus; //find total score
    total2 = upper2 + scores[1][6] + scores[1][7] + scores[1][8] + scores[1][9] + scores[1][10] + scores[1][11] + scores[1][12] + bonus2; //find total score
    //output all categories and the scores they received
    cout << names[0] << "'s Score: " << endl;
    //output all categories and the scores they received
    cout << "Category " << setw(15) << "Score" << endl;
    for (short i = 0; i < 13; i++)
        cout << setw(15) << cats[i] << setw(10) << scores[0][i] << endl;
    cout << endl << " Your average score in each category: ";
    //use of float is below
    cout << round(static_cast<float> (total - bonus) / 13) << endl;
    cout << " Upper Total: " << setw(11) << upper << endl;
    cout << " Bonus: " << setw(17) << bonus << endl;
    cout << endl << "Your total score: " << total << endl;
    //if there are two players, display player two's score
    if (names.size() > 1) {
        cout << names[1] << "'s Score:\n";
        //output all categories and the scores they received
        cout << "Category " << setw(15) << "Score" << endl;
        for (short i = 0; i < 13; i++)
            cout << setw(15) << cats[i] << setw(10) << scores[1][i] << endl;
        cout << endl << " Your average score in each category: ";
        //use of float is below
        cout << round(static_cast<float> (total2 - bonus2) / 13) << endl;
        cout << " Upper Total: " << setw(11) << upper2 << endl;
        cout << " Bonus: " << setw(17) << bonus2 << endl;
        cout << endl << "Your total score: " << total2 << endl;
        //see who won and save winning score in file
        if (total > total2) {
            cout << "Congrats " << names[0] << "! You won!\n";
            cout << "Sorry, " << names[1] << ". You lost.\n";
            //save score in file. to be displayed at beginning of next game
            outFile << names[0] << " " << total << " " << endl;
            fScores.push_back(total);
            players.push_back(names[0]);
        } else if (total2 > total) {
            cout << "Congrats " << names[1] << "! You won!\n";
            cout << "Sorry, " << names[0] << ". You lost.\n";
            //save score in file. to be displayed at beginning of next game
            outFile << names[1] << " " << total2 << " " << endl;
            fScores.push_back(total2);
            players.push_back(names[1]);
        } else {
            cout << "Congratulations " << names[0] << " and " << names[1] << " you tied!\n";
            cout << "Both of your names will be saved to the scoreboard.\n";
            outFile << names[0] << " " << total << " " << endl;
            outFile << names[1] << " " << total2 <<" " << endl;
            fScores.push_back(total);
            players.push_back(names[0]);
            fScores.push_back(total2);
            players.push_back(names[1]);
        }
    } else {
        //if there is only one player, he wins if gets a score of 225 or better
        //if he wins, add his name and score to the scorebaord
        if (total >= WINNING) {
            cout << "Congratulations! You got a score of 225 or better and won one-player version\n";
            outFile << names[0] << " " << total << " " << endl;
            fScores.push_back(total);
            players.push_back(names[0]);
        } else
            cout << "Sorry; you lost.\n";
    }
    outFile.close();
    //sort updated scoreboard arrays that include winning player
    selectionSort(fScores, fScores.size(), players);
    //display the updated scoreboard
    cout << "Updated Scoreboard:\n";
    for (short i = 0; i <= arsize; i++) {
        cout << setw(8) << players[i] << setw(10) << fScores[i] << endl;
    }
    //end the program
    return 0;
}

//initialize the bubbleSort function

void bubbleSort(vector<int> &list, int size, vector<string> &list2) {
    //declare ints maxElement and index
    //see if each element is greater than the next
    //if so, then switch the two elements
    //keep doing this so that the vector is in descending order
    //switch the names in the parallel vector so they match up with their scores
    int maxElement;
    int index;
    for (maxElement = size - 1; maxElement > 0; maxElement--) {
        for (index = 0; index < maxElement; index++) {
            if (list[index] < list[index + 1]) {
                swap(list[index], list[index + 1]);
                swap(list2[index], list2[index + 1]);
            }
        }
    }
}
//initialize the swap function

void swap(int &a, int &b) {
    //switch the two function arguments
    int temp = a;
    a = b;
    b = temp;
}
//initialize the other swap function, switching two string elements

void swap(string &a, string&b) {
    string temp = a;
    a = b;
    b = temp;
}
//initialize the linearSearch function

int linearSearch(vector<string> list, int size, string name) {
    //declare variables: index, position, found
    int index = 0;
    int position = -1;
    bool found = false;
    //search for the argument "name" in the vector and return the position of "name" if found
    while (index < size&& !found) {
        if (list[index] == name) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}
//initialize the turn function
//this function represents one round of play for one player

void turn(int (&scores)[2][13], const string cats[], vector<string> names, int player) {
    //if there are two players or it is player one's turn, do the turn
    if (names.size() > 1 || player == 0) {
        cout << "Your turn " << names[player] << endl;
        //seed the random number generator
        srand(static_cast<unsigned int> (time(0))); //type casting
        //declare variables
        char input;
        int dice1, dice2, dice3, dice4, dice5; //numbers rolled on dice
        int ones, twos, threes, fours, fives, sixes, rolls, score; //number of each number rolled in each round
        //whether or not each category has already been chosen
        bool roll, roll1, roll2, roll3, roll4, roll5; //whether or not each die should be rolled again
        static bool chosen [2][13]; //array showing whether each category has been used or not
       int taken;
        char r, answer;
        string choice;
        ones = twos = threes = fours = fives = sixes = 0; //start at 0 for each round
        roll1 = roll2 = roll3 = roll4 = roll5 = 1; //roll all the dice at beginning of each round
        rolls = 0; //set number of rolls to 0 for beginning of each round
        //roll the dice up to three times
        do {
            rolls++;
            do {
                cout << "Enter 'r' to roll the dice. Make sure you only enter one character.\n";
                cin>>r;
            } while (r != 'r' && r != 'R'); //wait until user inputs r to roll dice
            //roll the dice, all of them at first and then whichever one the user wants to the next 2 times
            if (roll1)
                dice1 = rand() % 6 + 1; //get a random number 1-6
            if (roll2)
                dice2 = rand() % 6 + 1; //get a random number 1-6
            if (roll3)
                dice3 = rand() % 6 + 1; //get a random number 1-6
            if (roll4)
                dice4 = rand() % 6 + 1; //get a random number 1-6
            if (roll5)
                dice5 = rand() % 6 + 1; //get a random number 1-6
            //output rolled numbers
            cout << "You rolled:\n";
            cout << "Dice 1:" << setw(3) << dice1 << endl;
            cout << "Dice 2:" << setw(3) << dice2 << endl;
            cout << "Dice 3:" << setw(3) << dice3 << endl;
            cout << "Dice 4:" << setw(3) << dice4 << endl;
            cout << "Dice 5:" << setw(3) << dice5 << endl;
            //allow user to roll again if he hasn't rolled 3 times yet
            if (rolls < 3) {
                cout << "Would you like to reroll some dice? Enter y for yes and n for no\n";
                cin>>answer; //user input to roll again
                roll = yesNo(answer);
                if (roll) {
                    //allow user to choose which dice to reroll
                    cout << "Would you like to reroll die 1? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll1 = yesNo(answer);
                    cout << "Would you like to reroll die 2? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll2 = yesNo(answer);
                    cout << "Would you like to reroll die 3? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll3 = yesNo(answer);
                    cout << "Would you like to reroll die 4? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll4 = yesNo(answer);
                    cout << "Would you like to reroll die 5? Enter y for yes and n for no\n";
                    cin>>answer;
                    roll5 = yesNo(answer);
                } else { //if they don't want to reroll, end the do while loop
                    rolls = 4;
                }
            }
        } while (rolls < 3);
        cout << "What category would you like to score in?\n";
        cout << "These are your available categories to score in:\n";
        //list categories not already chosen
        for (short i = 0; i < 13; i++) {
            if (!chosen[player][i])
                cout << cats[i] << endl;
        }
        //allow user to input category choice
        cin.ignore();
        getline(cin, choice);
        for(short i = 0; i<13; i++){
            if(choice == cats[i]){
                taken = i;
            }
        }
        //while loop to validate user input
        while ((choice != cats[0] && choice != cats[1] && choice != cats[2] && choice != cats[3] && choice != cats[4] && choice != cats[5] && choice != cats[6] &&
                choice != cats[7] && choice != cats[8] & choice != cats[9] && choice != cats[10] && choice != cats[11] && choice != cats[12])||chosen[player][taken]) {
            cout << "Invalid category choice. Enter again.\n";
            getline(cin, choice);
            for(short i = 0; i<13; i++){
                if(choice == cats[i]){
                    taken = i;
                }
            }
        }
        //for loop to make sure chosen category hasn't already been chosen
        
        //see how many of each number was rolled on the dice
        switch (dice1) {
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
        switch (dice2) {
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
        switch (dice3) {
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
        switch (dice4) {
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
        switch (dice5) {
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

        if (choice == cats[0]) {
            scores[player][0] = ones; //score is how many ones were rolled
            score = scores[player][0];
            chosen[player][0] = true; //category is chosed, don't list as available (this occurs at the end of each category)
        } else if (choice == cats[1]) {
            scores[player][1] = twos * 2; //score is sum of all twos rolled
            score = scores[player][1];
            chosen[player][1] = true;
        } else if (choice == cats[2]) {
            scores[player][2] = threes * 3; //score is sum of all three rolled
            score = scores[player][2];
            chosen[player][2] = true;
        } else if (choice == cats[3]) {
            scores[player][3] = fours * 4; //score is sum of all fours rolled
            score = scores[player][3];
            chosen[player][3] = true;
        } else if (choice == cats[4]) {
            scores[player][4] = fives * 5; //score is sum of all fives rolled
            score = scores[player][4];
            chosen[player][4] = true;
        } else if (choice == cats[5]) {
            scores[player][5] = sixes * 6; //score is sum of all sixes
            score = scores[player][5];
            chosen[player][5] = true;
        } else if (choice == cats[6]) {
            if (ones > 2 || twos > 2 || threes > 2 || fours > 2 || fives > 2 || sixes > 2) //see if there are three or more of one number
                scores[player][6] = dice1 + dice2 + dice3 + dice4 + dice5; //if there are three of a kind, score is sum of all die
            //otherwise score is zero
            score = scores[player][6];
            chosen[player][6] = true;
        } else if (choice == cats[7]) {
            if (ones > 3 || twos > 3 || threes > 3 || fours > 3 || fives > 3 || sixes > 3)//see if there are four or more of one number
                scores[player][7] = dice1 + dice2 + dice3 + dice4 + dice5; //if there are four of a kind, score is sum of all die
            //otherwise, score is zero
            score = scores[player][7];
            chosen[player][7] = true;
        } else if (choice == cats[8]) {
            if ((ones > 0 && twos > 0 && threes > 0 && fours > 0) ||
                    (twos > 0 && threes > 0 && fours > 0 && fives > 0) ||
                    (threes > 0 && fours > 0 && fives > 0 && sixes > 0))//see if there is a 1-2-3-4 straight
                scores[player][8] = 30; //if so, score is 30
            //otherwise score is zero
            score = scores[player][8];
            chosen[player][8] = true;
        } else if (choice == cats[9]) {
            if ((ones > 0 && twos > 0 && threes > 0 && fours > 0 && fives > 0) || (twos > 0 && threes > 0 && fours > 0 && fives > 0 && sixes > 0))//see if there is a 1-2-3-4-5 straight
                scores[player][9] = 40; //if so score is 40
            //otherwise score is zero
            score = scores[player][9];
            chosen[player][9] = true;
        } else if (choice == cats[10]) {
            //see if there is 3 of one number and two of another
            //if so, score is 25
            //otherwise, score is zero
            if ((ones == 3 && (twos == 2 || threes == 2 || fours == 2 || fives == 2 || sixes == 2)) ||
                    (twos == 3 && (ones == 2 || threes == 2 || fours == 2 || fives == 2 || sixes == 2)) ||
                    (threes == 3 && (ones == 2 || twos == 2 || fours == 2 || fives == 2 || sixes == 2)) ||
                    (fours == 3 && (ones == 2 || twos == 2 || threes == 2 || fives == 2 || sixes == 2)) ||
                    (fives == 3 && (ones == 2 || twos == 2 || threes == 2 || fours == 2 || sixes == 2)) ||
                    (sixes == 3 && (ones == 2 || twos == 2 || threes == 2 || fours == 2 || fives == 2)))
                scores[player][10] = 25;
            score = scores[player][10];
            chosen[player][10] = true;
        } else if (choice == cats[11]) {
            scores[player][11] = dice1 + dice2 + dice3 + dice4 + dice5; //score is sum of all die
            score = scores[player][11];
            chosen[player][11] = true;
        } else if (choice == cats[12]) {
            if (ones == 5 || twos == 5 || threes == 5 || fours == 5 || fives == 5 || sixes == 5)
                scores[player][12] = 50; //score is 50 if there are five of the same number
            //otherwise score is zero
            score = scores[player][12];
            chosen[player][12] = true;
        }
        //output score
        cout << "Category: " << choice << "       Score: " << score << endl;
        cout << "If you would like to quit the game, enter q. If you would like to continue playing, enter any other character.\n";
        cin>>input;
        if (input == 'q' || input == 'Q')
            exit(0);
    }
}
//initialize yesNo function

bool yesNo(char input) {
    //change character argument into a boolean to return
    //while the character is neither y nor n, get another character
    //if the character is y, return true, otherwise return false
    char answer = input;
    bool yes = false;
    while (answer != 'n' && answer != 'N' && answer != 'y' && answer != 'Y') {
        cout << "Invalid entry. Enter y for yes or n for no.";
        cin>>answer;
    }
    if (answer == 'y' || answer == 'Y')
        yes = true;
    return yes;
}
//initialize selectionSort function

void selectionSort(vector<int>&arr, int size, vector<string>&list) {
    //declare variables maxIn and maxVal
    int maxVal, maxIn;
    //organize the vector in descending order
    //organize the parallel vector with the names likewise
    for (short i = 0; i < (size - 1); i++) {
        maxIn = i;
        maxVal = arr[i];
        for (int index = i + 1; index < size; index++) {
            if (arr[index] > maxVal) {
                maxVal = arr[index];
                maxIn = index;
            }
        }
        swap(arr[maxIn], arr[i]);
        swap(list[maxIn], list[i]);
    }
}