/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Project 1: Yahtzee Psuedocode
 * Created on January 23, 2018, 11:33 AM
 * Updated on January 28, 2018,  9:32 PM
 */

// cstdlib, used for rand()
//iostream
//ctime, used to seed srand()
//iomanip, used to format output with setw
//string, used for strings
//cmath, used for round() function
//fstream, used for file I/O
//namespace

//main function
    //constant with score needed to win
    
    //make 13 string constants for yahtzee scoring categories
    
    //seed the random number generator
    
    //declare variables 
    //numbers rolled on dice
    //upper section Yahtzee scores
    //number of each number rolled in each round
    //whether or not each category has already been chosen
    //whether or not each die should be rolled again
    //lower section Yahtzee scores
    //scores, bonus score, and number of rolls used in round
    //user-inputted character to roll the dice
    //user inputted scoring category
    
    //ifstream and ofstream for input/output file
    
    //initialize bools at false so all categories are available
    //initialize category scores at 0
    
    //opening message
    
    //open the input file
    //read in the last score recorded from the file
    //output the score
    //close the file
    
    //for loop to do 13 rounds, to fill the 13 categories
        //start quantity of each number rolled at 0 for each round
        //roll all the dice at beginning of each round, so set each bool for rolling each dice at true
        //set number of rolls used to 0 for beginning of each round
    
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
       
        //allow user to choose which dice to reroll (if they choose to reroll)
        
        //if they don't want to reroll, or have already rolled three times, move on to scoring

        //list categories not already chosen
        
        //allow user to input category choice
        
        //validate user input; make sure their choice is an actual category

        //see how many of each number was rolled on the dice, i.e. how many ones, twos, etc
   
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
    //find upper score total
    //if the upper total is greater than 62, than user receives a 35 point bonus
    //find total score
    //output all categories and the scores they received
    
    //output total score
    //output average score in each category

    //if total score is 200 or better, user wins
    //otherwise, player loses

    //save score in file. to be displayed at beginning of next game
    
//end program


