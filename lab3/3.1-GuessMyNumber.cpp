/**************************************************
Project: Guess My Number
Lab Num: Week 3
Author: Jiaying Wu
Purpose: Driver Class File
Introducing random numbers, using a loop to get
user input, checking conditions and using "if"
decisions. Using functions to structure program.
**************************************************/

// header
#include <iostream>
#include <string>
#include <ctime>

// namespace
using namespace std;

// game function
void playGame();
string askForString();

// main function
int main(){
    // seed randoms
    srand(unsigned(time(NULL)));
    // play the game
    playGame();

    // wait and exist in Windows
    //system("pause");

    // wait and exist in Mac
    cin.ignore(1024, '\n');
    cout << " Press any key to continue...";
    cin.get();

    return 0;
}

void playGame() {
    // initialise variables
    int secretNumber = rand() % 100 + 1;
    int playerTurns = 7;
    int playerGuess = 0;
    bool isGameOver = false;

    // main game loop
    while (!isGameOver) {
        // ask for player's guess
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n I'm thinking of a number from 1-100.";
        cout << "\n What do you think it is? ";
        cin >> playerGuess;

        // check for accuracy
        if (playerGuess < secretNumber) {
            cout << "\n Your guess is too low!\n";
        } else if (playerGuess > secretNumber) {
            cout << "\n Your guess is too high!\n";
        } else {
            cout << "\n You guessed it!\n";
            isGameOver = true;
        }

        // increment and check turns
        playerTurns--;
        if (playerTurns == 0) {
            cout << "\n Out of turns! The number was " << secretNumber << "\n\n";
            isGameOver = true;
        } else {
            cout << " Turns left: " << playerTurns << "\n\n";
        }
    }

    // game is WON or LOST
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    string answer = "";
    answer = askForString("Do you want to play again? (y/n) ");
    if (answer == "y" || answer == "Y") {
        // wants to play again
        system("cls");
        playGame();
    } else {
        // say goodbye!
        cout << "\n Thanks for playing.\n";
    }
}

string askForString(string question) {
    // gets a line response (spaces included)
    cin.ignore();
    string userInput = "";
    while (userInput == "") {
        cout << "\n " + question;
        getline(cin, userInput);
    }
    return userInput;
}