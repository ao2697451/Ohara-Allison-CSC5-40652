/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alli
 * Gaddis 9th Edition Chapter 7 Problem 10 "Driver's License Exam"
 * Created on February 2, 2018, 2:54 PM
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    const char A = 'A';
    const char B = 'B';
    const char C = 'C';
    const char D ='D';
    char correct[20] = {A, D, B, B, C, B, A, B, C, D, A, C, D, B, D, C, C, A, D, B};
    char answer[20];
    int right = 0;
    vector<int>wrong(20);
    int numWrong = 0;
    for(int i = 1; i<=20; i++){
        cout<<"What was your answer for problem "<<i<<"?\n";
        cout<<"Be sure to answer A, B, C, or D.\n";
        cin>>answer[i-1];
        while(answer[i-1]!=A&&answer[i-1]!=B&&answer[i-1]!=C&&answer[i-1]!=D){
            cout<<"Invalid answer. Input again.\n";
            cin>>answer[i-1];
        }
        if(answer[i-1]==correct[i-1])
            right++;
        else{
            wrong[numWrong]=i;
            numWrong++;
        }
    }
    if(right>=15)
        cout<<"Congratulations! You passed\n";
    else
        cout<<"Sorry; you failed.\n";
    cout<<"You answered "<<right<<" questions correctly and "<<20-right<<" questions incorrectly\n";
    cout<<"You got the following questions wrong: \n";
    for(int index = 0; index<20-right; index++)
        cout<<wrong[index]<<endl;
    return 0;
}

