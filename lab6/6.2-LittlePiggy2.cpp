/**************************************************
Project: LITTLE PIGGY 2.0
Lab Num: Week 6
Author: Jiaying Wu
Purpose: Driver Class File
**************************************************/

// header
#include "LittlePiggy2.h"

// main function
int main() {
    // seed randoms
    srand(unsigned(time(NULL)));
    // display intro blurb
    displayText("littlePiggy.txt");
    // play the game
    setPlayers();
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
    int currentPlayer = rand() % 2 + 1;
    int dieVal = 0;

    while (!isGameOver) {
        // show whose turn it is
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n It's your turn, ";
        if (currentPlayer == 1) {
            cout << player1.getName();
        } else {
            cout << player2.getName();
        }

        // ask player for their choice of action
        char choice = askForLetter("Do you want to[r]oll or [b]ank? ");
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
                    currentPlayer = swapPlayers(currentPlayer);
                }
                break;

            case 'B':
                if (currentPlayer == 1) {
                    player1.updateScore(runningTotal);
                } else {
                    player2.updateScore(runningTotal);
                }
                displayScores();
                runningTotal = 0;
                currentPlayer = swapPlayers(currentPlayer);
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

int swapPlayers(int currentPlayer) {
    currentPlayer++;
    if (currentPlayer > 2) {
        currentPlayer = 1;
    }
    return currentPlayer;
}

bool checkGameOver() {
    if ((player1.getScore() >= targetScore) || (player2.getScore() >= targetScore)) {
        return true;
    } else {
        return false;
    }
}

void gameOver() {
// print winner message
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n The winner is: ";
    if (player1.getScore() > targetScore) {
        cout << player1.getName();
    } else {
        cout << player2.getName();
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    char answer = askForLetter("Do you want to play again? (y/n): ");
    if (answer == 'Y') {
        // wants to play again
        playLittlePiggy();
    } else {
        // say goodbye!
        cout << "\n Thanks for playing, " << player1.getName() << endl;
    }
}

void resetGame() {
    system("cls");
    player1.resetScore(0);
    player2.resetScore(0);
    diceSize = 6;
    targetScore = 100;
    runningTotal = 0;
}

void setPlayers() {
    player1 = Player("Cheryl", 0);
    player2 = Player("NEXUS", 0);
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
    cout << "\n Player: " << player1.getName() << "\t\tPlayer: " << player2.getName();
    cout << "\n Score: " << player1.getScore() << "\t\t Score: " << player2.getScore();
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n ";
    waitForPlayer();
    cout << endl;
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