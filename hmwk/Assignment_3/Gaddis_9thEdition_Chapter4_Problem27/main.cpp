/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 4 Problem 27 "Wi-Fi Diagnostic Tree"
 * Use the flowchart in the book to help the user fix a wi-fi problem.
 * Created on January 15, 2018, 6:35 PM
 */

#include <iostream>
#include <string>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    string x = "Did that fix the problem?\n"; 
    string answer;
    
    cout<<"Reboot the computer and try to connect.\n";
    cout<<x;
    cin>>answer;
    if(answer=="no"){
        cout<<"Reboot the router and try to connect.\n"<<x;
        cin>>answer;
        if(answer=="no"){
            cout<<"Make sure the cables between the router and modem are plugged in firmly.\n"<<x;
            cin>>answer;
            if (answer =="no"){
                cout<<"Move the router to a new location and try to connect.\n"<<x;
                cin>>answer;
                if(answer =="no"){
                    cout<<"Get a new router";
                }
            }
        }
    }

    return 0;
}

