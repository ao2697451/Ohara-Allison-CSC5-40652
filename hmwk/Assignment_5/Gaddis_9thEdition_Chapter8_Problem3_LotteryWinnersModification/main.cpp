/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara (40652)
 * Gaddis 9th Edition Chapter 8 Problem 3 "Lottery Winners Modification"
 * Created on February 2, 2018, 8:13 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int binarySearch(const int [], int, int);
int main(int argc, char** argv) {
    int position;
    int list[10] = {13579, 26791, 26792, 33445, 55555, 62843, 77777, 79422, 85647, 93121};
    int num;
    cout<<"Enter your five-digit lottery number\n";
    cin>>num;
    position = binarySearch(list, 10, num);
    if(position==-1)
        cout<<"Sorry, you lost.\n";
    else
        cout<<"Congrats! You won\n";
    return 0;
}
binarySearch(const int list[], int numElems, int value){
    int first = 0, 
            last = numElems-1,
            middle,
            position = -1;
    bool found = false;
    while(!found && first<=last){
        middle=(first + last)/2;
        if(list[middle]==value){
            found = true;
            position = middle;
        }
        else if(list[middle]>value)
            last = middle - 1;
        else
            first = middle + 1;
        }
    return position;
    }
