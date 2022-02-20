/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 A
This program will square a number if between the range of 1-99. It will input "invalid" otherwise.
*/
#include <iostream>
using namespace std;

int main()
{
    int i;
    //input will be integer "i"
    cout << "Input a number: ";
    cin >> i;
    if(0 < i && i < 100){
    //sets condition to be 1-99
        cout << i * i << endl;
    }
    else{
        cout << "Invalid";
    }

    return 0;

}
