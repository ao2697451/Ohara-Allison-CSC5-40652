/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara
 * Gaddis 9th Edition Chapter 8 Problem 2 "Lottery Winners"
 * Created on February 2, 2018, 5:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int linearSearch(int [], int, int);
int main(int argc, char** argv) {
    int position;
    int list[10] = {13579, 26791, 26792, 33445, 55555, 62843, 77777, 79422, 85647, 93121};
    int num;
    cout<<"Enter your five-digit lottery number\n";
    cin>>num;
    position = linearSearch(list, 10, num);
    if(position==-1)
        cout<<"Sorry, you lost.\n";
    else
        cout<<"Congrats! You won\n";
    return 0;
}
int linearSearch (int list[], int size, int number){
    int index = 0;
    int position = -1;
    bool found = false;
    
    while(index<size&& !found)
    {
        if(list[index]==number){
            found=true;
            position = index;
        }
        index++;
    }
    return position;
    }

