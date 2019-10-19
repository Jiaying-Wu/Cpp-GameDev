/**************************************************
Project: LITTLE PIGGY 1.0
Lab Num: Week 5
Author: Jiaying Wu
Purpose: Driver Class File
**************************************************/

// header
#include "LittlePiggy.h"

// main function
int main() {
    // seed randoms
    srand(unsigned(time(NULL)));
    // display intro blurb
    displayText("littlePiggy.txt");
    // play the game
    playLittlePiggy();
    // wait and exit
    waitForPlayer();
    return 0;
}


/**************************************************
MAIN GAME FUNCTIONS
**************************************************/
void playLittlePiggy() {
    // reset variables
    resetGame();
    displayScores();

    // initialise local vars
    bool isGameOver = false;
    int dieVal = 0;

    while (!isGameOver) {
        // show whose turn it is
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n It's your turn, ";
        if (currentPlayer == 1) {
            cout << playerName1;
        } else {
            cout << playerName2;
        }
        // ask player for their choice of action
        char choice = askForLetter("Do you want to [r]oll or [b]ank? ");
        switch (choice) {
            case 'R':
                dieVal = rand() % diceSize + 1;
                if (dieVal > 1) {
                    // player can roll again
                    runningTotal += dieVal;
                    cout << "\n You rolled: " << dieVal << "\tTotal: " << runningTotal;
                } else {
                    // player rolled a 1 so loses all their points
                    runningTotal = 0;
                    cout << "\n You rolled: " << dieVal << "\tTotal: " << runningTotal;
                    displayScores();
                    swapPlayers();
                }
                break;

            case 'B':
                if (currentPlayer == 1) {
                    playerScore1 += runningTotal;
                } else {
                    playerScore2 += runningTotal;
                }
                displayScores();
                runningTotal = 0;
                swapPlayers();
                break;

            default:
                cout << "\n Please choose either [r]oll or [b]ank.\n";
        }
        // check for a winner
        isGameOver = checkGameOver();
    }
    gameOver();
}

char askForLetter(string question) {
// ask a single letter response question
    char choice = ' ';
    while (choice == ' ') {
        cout << "\n " << question;
        cin >> choice;
    }
    return toupper(choice);
}

void swapPlayers() {
    currentPlayer++;
    if (currentPlayer > 2) {
        currentPlayer = 1;
    }
}

bool checkGameOver() {
    if ((playerScore1 >= targetScore) || (playerScore2 >= targetScore)) {
        return true;
    } else {
        return false;
    }
}

void gameOver() {
// print winner message
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n The winner is: ";
    if (playerScore1 > targetScore) {
        cout << playerName1;
    } else {
        cout << playerName2;
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    char answer = askForLetter("Do you want to play again? (y/n): ");
    if (answer == 'Y') {
// wants to play again
        playLittlePiggy();
    } else {
// say goodbye!
        cout << "\n Thanks for playing, " << playerName1 << endl;
    }
}

void resetGame() {
    system("cls");
    playerName1 = "Cheryl";
    playerName2 = "NEXUS";
    playerScore1 = 0;
    playerScore2 = 0;
    diceSize = 6;
    targetScore = 100;
    runningTotal = 0;
    currentPlayer = rand() % 2 + 1;
}

void waitForPlayer() {
    cout << "\n ";
    system("pause");
    system("cls");
}


/**************************************************
DISPLAY FUNCTIONS
**************************************************/
void displayScores() {
    // display the results of a roll
    cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n Score to beat: " << targetScore << "\tDice Size: " << diceSize;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n Player: " << playerName1 << "\t\tPlayer: " << playerName2;
    cout << "\n Score: " << playerScore1 << "\t\t Score: " << playerScore2;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n ";
    waitForPlayer();
}

void displayText(string myFileName) {
// local vars
    fstream blurbData(myFileName);
    string line;
// read in file data
    if (blurbData.is_open()) {
        while (getline(blurbData, line)) {
            cout << line << "\n";
        }
        blurbData.close();
    }
    waitForPlayer();
}