/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Allison Ohara (40652)
 * Gaddis 9th Edition Chapter 8 Problem 4
 * Created on February 2, 2018, 5:51 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int binarySearch(const unsigned int [], int, int );
void bubbleSort(unsigned int [], int size);
void swap(int &a, int &b);
int main(int argc, char** argv) {
    unsigned int list[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int number;
    int position;
    cout<<"Enter a charge account number\n";
    cin>>number;
    bubbleSort(list,18);
    position = binarySearch(list, 18, number);
    if(position==-1)
        cout<<"Invalid user input\n";
    else
        cout<<"Valid user input.\n";
    return 0;
}
void bubbleSort(unsigned int list[], int size){
    int maxElement;
    int index;
    for(maxElement=size-1; maxElement>0; maxElement--){
        for(index = 0; index<maxElement; index++){
            if(list[index]>list[index+1]){
                swap(list[index],list[index+1]);
            }
        }
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
binarySearch(const unsigned int list[], int numElems, int value){
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