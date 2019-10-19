/**************************************************
Project: MAGIC 8-BALL
Lab Num: Week 4
Author: Jiaying Wu
Purpose: Reading data from a file and storing
it in an array. Randomly choosing an element
from the array and displaying it. Using loops
to ask for user input.
**************************************************/

// header
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

// namespace
using namespace std;

// declare variables and constants here
const int MAX_RESPONSES = 20;
string responses[MAX_RESPONSES];

// declare functions here
void displayTitle();
void magic8Ball();
void getResponses(string myFileName);
string askForString(string question);

// main function
int main() {
    // seed randoms
    srand(static_cast<unsigned int>(time(0)));
    // load the responses
    getResponses("responses.txt");
    // activate the magic 8-ball
    magic8Ball();
    // wait and exit
    system("pause");
    return 0;
}

void magic8Ball() {
    // display title of game
    displayTitle();

    // ask for the user's name
    string userName = askForString("Please enter your name: ");
    cout << " Thank you, " << userName << ".\n";
    cout << " Ask me anything and I'll reveal all!\n ";
    system("pause");

    // create the loop for asking questions
    string userInput = "";
    int answer = 0;
    while (userInput != "Q" && userInput != "q") {
        system("cls");
        displayTitle();
        userInput = askForString("Type your question or [Q]uit to exit.\n\n ");
        answer = rand() % MAX_RESPONSES;
        cout << "\n My answer is: " << responses[answer] << "\n\n ";
        system("pause");
    }
    cout << "\n I knew you would do that ... \n See, I know everything!\n\n ";
}

void displayTitle() {
    // display a heading
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " The Magic 8-Ball Knows All\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

string askForString(string question) {
// gets a line response (spaces included)
    string userInput = "";
    while (userInput == "") {
        cout << " " + prompt;
        getline(cin, userInput);
    }
    return userInput;
}

void getResponses(string myFileName) {
// load responses from file
    string line = "";
    fstream fileToRead(myFileName);
    if (fileToRead.is_open()) {
        for (int num = 0; num < MAX_RESPONSES; num++) {
            getline(fileToRead, line);
            responses[num] = line;
        }
    } else {
        cout << "\n File not found!\n";
    }
    fileToRead.close();
}

