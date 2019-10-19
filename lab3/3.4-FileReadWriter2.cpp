/**************************************************
Project: File Read-Writer 2.0
Lab Num: Week 3
Author: Jiaying Wu
Purpose: Driver Class File
Writing more than one line of data to a file,
using a for loop to add data, getting user input,
display data to the screen, and using functions
to structure a program.
**************************************************/

// header
#include <iostream>
#include <fstream>
#include <string>

// namespace
using namespace std;

// declare functions here
string askForString(string question);
void writeFile(string myFileName);
void readFile(string myFileName);
void displayTitle();

// main function
int main() {
    // display a heading
    displayTitle();
    // ask user for a file name
    string newFile = askForString("Enter file name: ");
    newFile += ".txt";
    // write data to that file
    writeFile(newFile);
    // read and display that data
    readFile(newFile);
    // wait and exit
    system("pause");
    return 0;
}

string askForString(string question) {
    // gets a line response (spaces included)
    string userInput = "";
    while (userInput == "") {
        cout << " " + question;
        getline(cin, userInput);
    }
    return userInput;
}

void writeFile(string myFileName) {
    // ask how many items to add to file
    string numItems = askForString("How many items to add to this file? ");
    // open file for appending text when writing data
    ofstream fileToWrite(myFileName, ios::app);
    if (fileToWrite.is_open()) {
        // get items one at a time and add to file
        for (int num = 0; num < stoi(numItems); num++) {
            string myData = askForString(" Item: ");
            fileToWrite << myData << endl;
        }
    } else {
        cout << "\n File not found!\n";
    }
    // remember to close the file
    fileToWrite.close();
}

void readFile(string myFileName) {
    // reading from a file
    cout << "\n Reading the data in to display.\n";
    // open file for reading
    ifstream fileToRead(myFileName);
    if (fileToRead.is_open()) {
        string line = "";
        while (!fileToRead.eof()) {
            getline(fileToRead, line);
            cout << line << "\n";
        }
    } else {
        cout << "\n File not found!\n";
    }
    // remember to close the file
    fileToRead.close();
}

void displayTitle() {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " Writing & Reading Data to/from a File\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}