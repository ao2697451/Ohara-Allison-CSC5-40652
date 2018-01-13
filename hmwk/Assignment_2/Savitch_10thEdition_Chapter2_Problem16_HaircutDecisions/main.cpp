/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Savitch 10th Edition Chapter 2 Problem 16
 * Follow the flowchart in the book to ask the user questions
 * in a certain order and then determine the type of haircut
 * they should get.
 * Created on January 12, 2018, 11:22 AM
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string gender, superStatus, food, television;
    
    cout<<"Enter all your answers with correct spelling in lowercase letters.(";
    cout<<"i.e. 'male' or 'superhero')\n";
    
    cout<<"Are you male or female?\n";
    cin>>gender;
    

    if (gender=="male" || gender=="female"){
        cout<<"Superhero or supervillain?\n";
        cin>>superStatus;
        if(superStatus == "supervillain")
            cout<<"You should get a mowhawk";
    
        else if(gender == "male" && superStatus=="superhero"){
            cout<<"Steak or sushi?\n";
            cin>>food;
            if (food == "steak"){
                cout<<"You should get a flat top.";
             }
            else{
                cout<<"You should get a pompadour";  
            }
             
        }
        else if (gender== "female" && superStatus == "superhero"){
            cout<<"Anime or sitcom?\n";
            cin>>television;
            if(television == "anime"){
                cout<<"You should go with bangs.";
            }
            else {
                cout<<"You should get a bob.";
            }
        }
        else
            cout<<"Error; invalid user input";
    }
    else
        cout<<"Error; invalid user input";
    return 0;
}

