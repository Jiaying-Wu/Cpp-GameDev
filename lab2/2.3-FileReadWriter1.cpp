/**************************************************
Project: File Read-Writer 1
Lab Num: Week 2
Author: Jiaying Wu
Purpose: Driver Class File
Exploring writing data to a file, storing data
in variables, getting user input, display data
to the screen, and using functions to structure
a program.
**************************************************/

// header
#include <iostream>
#include <fstream>
#include <string>

// namespace
using namespace std;

// declare variable
string textFileName = "";

// declare functions
void displayTitle();

void setFileName();

void writeFile();

void readFile();

// main function
int main(){
    // display title
    displayTitle();
    // ask user for the "write" file name
    setFileName();
    // write data to that file
    writeFile();
    // read and display that data
    readFile();

    // wait and exit in Windows
    //system("pause");

    // wait and exit in Mac
    cin.ignore(1024, '\n');
    cout << " Press any key to continue ...";
    cin.get();

    return 0;
}

 void displayTitle(){
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " Writing & Reading Data to/from a File\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

void setFileName(){
    textFileName = "";
    cout << "\n Enter file name (no ext): ";
    getline(cin, textFileName);
    textFileName += ".text";
}

void writeFile(){
    // writing to a file
    string myData = "";
    ofstream fileToWrite;
    cout << "\n Type what you want then press enter.\n ";
    getline(cin, myData);
    fileToWrite << myData << endl;
    fileToWrite.close();
}

void readFile(){
    // reading from a file
    cout << "\n Reading the data in to display.\n ";
    string myData= "";
    ifstream fileToRead;
    fileToRead.open(textFileName);
    getline(fileToRead, myData);
    fileToRead.close();
    cout << myData << "\n\n";
}