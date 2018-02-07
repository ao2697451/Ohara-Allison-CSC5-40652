/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 2 Pseudocode
 * Updated on February 7, 2018, 12:00 p.m.
 */
//System Libraries
// cstdlib, used for rand
//iostream
//ctime, used to seed srand()
//iomanip,used to format output with setw
//string,used for strings
//cmath,used for round() function
//fstream,used for file I/O
//vector,used for vectors

//standard namespace

//User Libraries

//Global Constants

//Function Prototypes
//bubbleSort to sort vectors
//swap (integers)
//swap (strings)
//function "turn" for each round of play in game
//linearSearch to search for a string in a vector
//function to turn character into a boolean
//selectionSort to sort vectors 

//int main
    //declare variables and constants

    //score needed to win
    //constants for the 13 yahtzee scoring categories

    //upper totals, bonuses, total scores, size of vector, and position
    //initialize two dimensional array with scores all at zero

    //vectors to hold the past scores, past names, current names
    
    //ifstream and ofstream

    //opening message

    //open the in file
    //open existing out file   
    //take names and scores from file and place them in vectors
    //close the in file

    //find the size the array needs to be by finding the size of the vector
    //sort the vectors in descending order using the bubble method
    //display the score board

    //get the name of the player
    //put the name of the player in a vector
    //search for the player's name in the score board
    //if player has won before, display previous score

    //see if there is a second player
    //if so, get second player's name and search for it in Scoreboard
    //search for the player's name in the score board

    //use for loop to allow both players to play 13 rounds
        //use turn function for player one
        //use turn function for player two

    //find upper score totals
    //if the upper total is greater than 62, than user receives a 35 point bonus
    //calculate total scores

    //output all categories and the scores they received for player one
    //calculate and output average score for all scoring categories (using float and math library)
    
    //if there are two players, display player two's score
        //output all categories and the scores they received for player two
        //see who won and save winning score in file
        //if player one's score is greater than that of player two, player one wins
            //save score/name in file to be displayed at beginning of next game
            //add name and score to vector with past scores
        
        //otherwise if player two's score is greater than that of player one, player two wins
            //save score/name in file to be displayed at beginning of next game
            //add name and score to to vector with past scores
            
    //finally, if they tie, then they both wins and both scores/names are saved in the file
        //both scores and names are also added to the vector with past scores and names

    //if there is only one player, he wins if gets a score of 200 or better
    //if he wins, add his name and score to the scorebaord
    
    //close the file

    //sort updated scoreboard vectors that include winning player
    //display the updated scoreboard
    //end the program

//initialize the bubbleSort function
    //declare ints maxElement and index
    //see if each element is greater than the next
    //if so, then switch the two elements
    //keep doing this so that the vector is in descending order
    //switch the names in the parallel vector so they match up with their scores
    
//initialize the swap functions
    //these functions switch two values (ints or strings) in a vector and are used in the sort functions

//initialize the linearSearch function
    //declare variables: index, position, found
    //search for the argument "name" in the vector and return the position of "name" if found

//initialize the turn function
//this function represents one round of play for one player
    //if there are two players or it is player one's turn, do the turn
        //seed the random number generator
        //declare variables
        //numbers rolled on dice
        //number of each number rolled in each round
        //whether or not each category has already been chosen
        //whether or not each die should be rolled again
        //array showing whether each category has been used or not
        //use a do while loop to allow user to roll dice
            //start at 0 for each round
            //roll all the dice at beginning of each round
            //set number of rolls to 0 for beginning of each round
            //roll the dice up to three times
            //wait until user inputs r to roll dice
            //roll the dice, all of them at first and then whichever one the user wants to the next 2 times
                //get a random number 1-6 for die 1
                //get a random number 1-6 for die 2                
                //get a random number 1-6 for die 3
                //get a random number 1-6 for die 4
                //get a random number 1-6 for die 5
            //output rolled numbers

            //allow user to roll again if he hasn't rolled 3 times yet
                //user input to roll again

                    //allow user to choose which dice to reroll
                //if they don't want to reroll, end the do while loop

        //list categories not already chosen

        //allow user to input category choice

        //while loop to validate user input

        //for loop to make sure chosen category hasn't already been chosen

        //see how many of each number was rolled on the dice

        //score the roll according to the user inputted choice, and cross the category off available category list
        
            //if category choice is ones, score is how many ones were rolled
            //cross category off list of available categories
        
            //if category choice is twos, score is sum of all twos rolled
            //cross category off list of available categories
            
            //if category choice is threes, score is sum of all threes rolled
            //cross category off list of available categories

            //if category choice is fours, score is sum of all fours rolled
            //cross category off list of available categories

            //if category choice is fives, score is sum of all fives rolled
            //cross category off list of available categories

            //if category choice is sixes, score is sum of all sixes rolled
            //cross category off list of available categories

            //if category choice is three of a kind, see if there are three of a kind
            //if so, score is sum of all die. Otherwise, score is zero.
            //cross category off list of available categories
            
            //if category choice is four of a kind, see if there are four of a kind
            //if so score is sum of all die. Otherwise, score is zero.
            //cross category off list of available categories
            
            //if category choice is small straight, see if a small straight was rolled
            //if so, score is 30. Otherwise, score is zero.
            //cross category off list of available categories

            //if category choice is large straight, see if a large straight was rolled
            //If so, score is 40. Otherwise, score is zero.
            //cross category off list of available categories

            //if category choice is full house, see if a full house was rolled
            //if so, score is 25. Otherwise, score is zero
            //cross category off list of available categories

            //if category choice is chance, score is sum of all die
            //cross category off list of available categories

            //if category choice is yahtzee, see if five of the same number was rolled
            //if so, score is 50. Otherwise score is zero
            //cross category off list of available categories
        //output score
//end function


//initialize yesNo function
    //change character argument into a boolean to return
    //while the character is neither y nor n, get another character
    //if the character is y, return true, otherwise return false

//initialize selectionSort function
    //declare variables maxIn and maxVal
    //organize the vector in descending order
    //organize the parallel vector with the names likewise

