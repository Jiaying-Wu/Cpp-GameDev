/**************************************************
Project: STRING RACERS
Lab Num: Week 3
Author: Jiaying Wu
Purpose: Driver Class File
Exploring the nature of decisions and loops.
Builds on previous knowledge of reading files,
getting user input, and string functions.
**************************************************/

// header
#include <iostream>
#include <string>
#include <ctime>

// namespace
using namespace std;

// declare variables and CONSTANTS here
const int MAX_LENGTH = 80;
const string RACER_1 = "<@>";
const string RACER_2 = "o#o";
const string TRACK = "|-----------------------------------------------------------------------------|";

// declare functions here
void displayTitle();
void gotoRaces();
void resetRace();
string askForString(string question);

// main function
int main() {
    // seed randoms
    srand((time(NULL)));
    // go to the races
    gotoRaces();
    // wait and exit
    system("pause");
    return 0;
}

void gotoRaces() {
    // display title of game
    displayTitle();

    // name the racers
    cout << " Let's name the racers first.\n";
    string racerName1 = askForString("Give Racer1 a name: ");
    string racerName2 = askForString("Give Racer2 a name: ");
    string racer1 = RACER_1;
    string racer2 = RACER_2;

    // reset race start
    resetRace();

    // run the race
    int myRand = 0;
    while (racer1.length() < MAX_LENGTH && racer2.length() < MAX_LENGTH) {
        system("cls");
        displayTitle();
        myRand = rand() % 5 + 1;
        racer1.insert(racer1.begin(), myRand, ' ');
        myRand = rand() % 5 + 1;
        racer2.insert(racer2.begin(), myRand, ' ');
        cout << racer1 << endl;
        cout << TRACK << endl;
        cout << racer2 << endl;
    }

    // race is over
    if (racer1.length() > racer2.length()) {
        cout << " " + racerName1 + " is the winner!\n\n ";
    } else {
        cout << " " + racerName2 + " is the winner!\n\n ";
    }
}

void resetRace() {
    system("cls");
    displayTitle();
    cout << RACER_1 << endl;
    cout << TRACK << endl;
    cout << RACER_2 << endl;
    cout << " ";
    system("pause");
}

void displayTitle() {
    // display a heading
    cout << "\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\t\t\t A Day at the Races\n";
    cout << "\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}

string askForString(string question) {
    // gets a line response (spaces included)
    string userInput = "";
    cout << "\n " + question;
    getline(cin, userInput);
    return userInput;
}