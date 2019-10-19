/**************************************************
Project: Guess My Number ENHANCED VERSION
Lab Num: Week 3
Author: Jiaying Wu
Purpose: Driver Class File
This is only one way you may enhance your code.
**************************************************/

// header
#include <iostream>
#include <string>
#include <time.h>

// namespace
using namespace std;

// game functions
void playGame();
string askForString(string question);

// enhanced functions
void displayTitle();
bool checkGuess(int guess, int secret);

int main() {
// seed randoms
    srand(unsigned(time(NULL)));
// play the game
    playGame();
// wait and exit
    system("pause");
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
        displayTitle();
        cin >> playerGuess;

        // check for accuracy
        isGameOver = checkGameOver(playerGuess, secretNumber);

        // decrement and check turns
        playerTurns--;
        if (playerTurns == 0) {
            cout << " Out of turns! The number was " << secretNumber;
            isGameOver = true;
        } else if (isGameOver && playerGuess == secretNumber) {
            cout << " Rats, you beat me, but ... ";
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
        cout << "\n Thanks for playing.\n ";
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

// ENHANCED GAME FUNCTIONS
void displayTitle() {
    cout << "\t Guess My Number";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n I'm thinking of a number from 1-100.";
    cout << "\n What do you think it is? ";
}

bool checkGameOver(int guess, int secret) {
    if (guess < secret) {
        cout << "\n Your guess is too low!\n";
    } else if (guess > secret) {
        cout << "\n Your guess is too high!\n";
    } else {
        cout << "\n You guessed it!\n";
        return true;
    }
    return false;
}
