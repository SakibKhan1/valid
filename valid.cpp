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
    int n;
    //n is user input from 0 to 100
    cout << "Input a number: ";
    cin >> n;
    while ((n<0)||(n>100))
    {
        cout << "Please re-enter a valid entry:";
        cin >> n;
    }
    //makes user input again if outside of bounds
    if ((n>0)&&(n<100));
    {
        n = n*n;
        cout <<n;
    }
    return 0;

}

