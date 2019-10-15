/**************************************************
Project: String Analyser 1
Lab Num: Week 2
Author: Jiaying Wu
Purpose: Driver Class File
Using string functions to manipulate and find
elements within a string. To create basic objects
and run functions on objects.
**************************************************/

// header
#include <iostream>
#include <string>

// namespace
using namespace std;

// declare function
void displayTitle();
void stringAnalyser();

// main function
int main(){
    // display the title
    displayTitle();
    // run the analyser
    stringAnalyser();

    // wait and pause in Window
    //system("pause");

    // wait and pause in Mac
    cin.ignore(1024, '\n');
    cout << " Press any key to continue...\n\n";
    cin.get();
    return 0;
}

// function displayTitle()
void displayTitle(){
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\tManipulating String Objects\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}

// function stringAnalyser()
void stringAnalyser(){
    // declare and initialise local variables
    string userString = "";
    char userChar = ' ';

    // get user input for analysis
    cout << " Welcome to the string analyser\n\n";
    cin >> userString;
    cout << " What character are you looking for? ";
    cin >> userChar;

    // declare results of string analysis
    cout << "\n The string you enter was " << userString << endl;
    cout << " It has " << userString.length() << userString << " bytes in memory\n";
    cout << " The first character is " << userString[0] << endl;
    cout << " The last character is " << userString[userString.length() - 1] << endl;

    // if the result is really big the character was not found
    cout << " The search character is found at index " << userString.find(userChar) << "\n\n";
}