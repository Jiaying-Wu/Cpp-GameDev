/*************************************************
Project: Silly Story 1
Lab Num: Week 2
Author: Jiaying Wu
Purpose: Driver Class File
Exploring storing data in variables, getting
user input, and displaying data to the screen.
Also doing simple calculations with variables.
*************************************************/

// header
#include <iostream>
#include <string>

// namespace
using namespace std;

// function to clear the screen in Mac
#include <cstdlib>

void clear_screen() {
#ifdef WINDOWS
    system("CLS");
#else
    // Assume POSIX
    system("clear");
#endif
}

// main function
int main(){
    // define a constant
    const string UNIT = "FIT1048";

    // declare and initialise local variables
    string studentName = "";
    string tutorName = "";
    int numStudents = 0;
    int numResults = 0;

    // ask user for some information
    cout << endl;
    cout << " Please enter following for a personalise adventure." << endl << endl;
    cout << " Enter your first name: ";
    cin >> studentName;
    cout << " Enter your tutor's first name:  ";
    cin >> tutorName;
    cout << " Enter the number of student in your class: ";
    cin >> numStudents;
    cout << " Enter a positive number less than the first: ";
    cin >> numResults;
    cout << endl << " ";

    // pause the system in Mac
    cin.ignore(1024, '\n');
    cout << " Press any key to continue ...";
    cin.get();

    // pause the system in Window
    // system("pause");

    // pause the system in Mac
    clear_screen();

    // calculate new values
    int numPass = numStudents - numResults;
    int numHDs = numStudents % numResults;

    // clear the screen in Window
    // system("cls");

    // display a heading
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\t\tAdventures in Programing\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    // tell the story
    cout << " The smart student, " << studentName << ", chose the best unit (" << UNIT << "). \n";
    cout << " They knew this because " << tutorName << " would be an excellent teacher, \n";
    cout << " showing them how to program in C++ with ease!\n\n";
    cout << " However, " << tutorName << " knew that only " << numPass << " students would pass and\n";
    cout << " only " << numHDs << " would earn a High Distinction.\n\n ";
    cout << studentName << " was determined to be an HD student in " << UNIT << ".\n\n";

    // wait and exist in Window
    // system("pause");

    // pause the system in Mac
    cin.ignore(1024, '\n');
    cout << " Press any key to continue ...\n\n";
    cin.get();
    return 0;
}