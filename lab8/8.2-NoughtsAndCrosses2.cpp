/**************************************************
Project: Noughts and Crosses 2.0
Lab Num: Week 8
Author: Jiaying Wu
Purpose: Driver Class File
Using POINTERS to pass variables
Adapted from code by Michael Dawson
**************************************************/

// header
#include "OXmain2.h"

// main function
int main() {
    // display intro blurb
    displayText("OandX.txt");
    // play the game
    playOX();
    // wait and exit
    waitForPlayer();
    return 0;
}

void playOX() {
    // initialise the players
    char human = setHumanPiece();
    char computer = getOpponentPiece(human);
    char currentPlayer = X;

    // initialise game variables
    int move;
    vector<char> board(MAX_SQRS, EMPTY);

    // show empty game board
    displayBoard(&board);

    // play the game
    while (checkGameOver(&board) == NONE) {
        if (currentPlayer == human) {
            move = humanMove(&board, human);
            board[move] = human;
        } else {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(&board);
        currentPlayer = getOpponentPiece(currentPlayer);
    }

    // game done
    gameOver(checkGameOver(&board), human, computer);
}

int numAnswer(string question, int high, int low) {
    // ask a single letter response question
    int number = -1;
    while (number < low || number > high) {
        cout << "\n " << question << " ( " << low << " to " << high << " ): ";
        cin >> number;
    }
    return number;
}

char charAnswer(string question) {
    // ask a single letter response question
    char choice = ' ';
    while (choice == ' ') {
        cout << "\n " << question;
        cin >> choice;
    }
    return toupper(choice);
}

char setHumanPiece() {
    char goFirst = charAnswer("Do you want to go first? (y/n): ");
    if (goFirst == 'Y') {
        cout << "\n You'll be playing as " << X;
        return X;
    } else {
        cout << "\n Interesting choice ... I'll play as " << X;
        return O;
    }
}

char getOpponentPiece(char piece) {
    if (piece == X) {
        return O;
    } else {
        return X;
    }
}

char checkGameOver(const vector<char>* const board) {
    // This is a brute force method - can you improve it?
    // all possible winning rows
    const int WIN_ROWS[8][3] {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    const int MAX_ROWS = 8;
    // check all possible rows for a 3-in-a-row WIN first
    for (int row = 0; row < MAX_ROWS; row++) {
        if (((*board)[WIN_ROWS[row][0]] != EMPTY) &&
            ((*board)[WIN_ROWS[row][0]] == (*board)[WIN_ROWS[row][1]]) &&
            ((*board)[WIN_ROWS[row][1]] == (*board)[WIN_ROWS[row][2]])) {
            // returns the symbol in the first position
            return (*board)[WIN_ROWS[row][0]];
        }
    }

    // no one has won yet, so check for a TIE (all squares taken)
    if (count(board->begin(), board->end(), EMPTY) == 0) {
        return TIE;
    }

    // there are still some empty squares
    return NONE;
}

bool isMoveLegal(const vector<char>* board, int move) {
    return (*board)[move] == EMPTY;
}
int humanMove(const vector<char>* const board, char human) {
    // get a number from 0-8
    int move = numAnswer("Where will you move? ", (board->size() - 1));

    // check move is possible
    while (!isMoveLegal(board, move)) {
        cout << " That square is taken.\n";
        move = numAnswer("Where will you move? ", (board->size() - 1));
    }

    // allow the move
    cout << " Hmmm, interesting ...\n";
    return move;
}

int computerMove(vector<char> board, char computer) {
    // Working with a copy of the board for testing possible moves
    // Computer AI is a basic 3-step strategy
    unsigned int move = 0;
    bool found = false;

    // 1: if the computer can win on this move
    while (!found && move < board.size()) {
        if (isMoveLegal(&board, move)) {
            board[move] = computer;
            found = checkGameOver(&board) == computer;
            board[move] = EMPTY;
        }
        if (!found) {
            move++;
        }
    }

    // 2: if the human can win on next move, block them
    if (!found) {
        move = 0;
        char human = getOpponentPiece(computer);
        while (!found && move < board.size()) {
            if (isMoveLegal(&board, move)) {
                board[move] = human;
                found = checkGameOver(&board) == human;
                board[move] = EMPTY;
            }
            if (!found) {
                move++;
            }
        }
    }

    // 3: otherwise take best remaining square
    if (!found) {
        move = 0;
        unsigned int pos = 0;
        const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
        while (!found && pos < board.size()) {
            move = BEST_MOVES[pos];
            if (isMoveLegal(&board, move)) {
                found = true;
            }
            pos++;
        }
    }

    // display the result
    cout << "\n I shall take square number " << move << endl;
    return move;
}

void gameOver(char winner, char human, char computer) {
    // print winner message
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n The winner is: " << winner;
    if (winner == computer) {
        cout << "\n You are no match for my intelligence!";
    } else if (winner == human) {
        cout << "\n No ... this can't be right! Did you cheat?";
    } else {
        cout << "\n OK, so it's a tie. I still can beat you!";
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    char answer = charAnswer("Do you want to play again? (y/n): ");
    if (answer == 'Y') {
        // wants to play again
        playOX();
    } else {
        // say goodbye!
        cout << "\n Thanks for playing.\n";
    }
}

void waitForPlayer() {
    cout << "\n ";
    system("pause");
    system("cls");
}


/**************************************************
DISPLAY FUNCTIONS
**************************************************/

void displayBoard(const vector<char>* const board) {
    string line = "\n\t +---+---+---+";
    cout << line << "\n\t | " << (*board)[0] << " | " << (*board)[1] << " | " << (*board)[2] << " |";
    cout << line << "\n\t | " << (*board)[3] << " | " << (*board)[4] << " | " << (*board)[5] << " |";
    cout << line << "\n\t | " << (*board)[6] << " | " << (*board)[7] << " | " << (*board)[8] << " |";
    cout << line << endl;
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