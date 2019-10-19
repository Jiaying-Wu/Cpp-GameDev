/**************************************************
Project: Word Scrambler
Lab Num: Week 4
Author: Jiaying Wu
Purpose: Application File
Consolidate skills learned thus far, including:
- adv reading data from a file and storing it
- using loops to achieve an appropriate outcome
- exploring new ways to manipulate strings
**************************************************/

// header
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

// namespace
using namespace std;

// declare variables here
const int MAX_HINTS = 7;
const int MAX_LIST = 6;
string playerName;
int playerScore;
int skillLevel;
vector<string> wordList;
vector<string> hintList;
string rightList[MAX_LIST] = { "well done", "spot on", "brilliant", "cool", "way to go", "awesome" };
string wrongList[MAX_LIST] = { "oops", "nope", "try again", "keep trying", "try something else", "not quite right" };

// initialise functions here
void setPlayerOptions();
void setWordLists(string myFileName);

// game functions here
string scrambleWord(string myWord);
void playWordScrambler();
void gameOver();
void quitGame();

// workhorse functions here
void displayPlayerStats(int numWords, int numHints);
void displayTitle();
void waitForPlayer();
void displayText(string myFileName);
string askForString(string question);
char askForLetter(string question);
int askForNumber(string question, int low, int high);

// main function
int main() {
    // seed randoms
    srand(unsigned(time(NULL)));
    // initialise data variables
    setWordLists("wsWordlist.txt");
    // display how to play text
    displayText("wsIntro.txt");
    // ask for player's name and skill level
    setPlayerOptions();
    // play the game
    playWordScrambler();
    // wait and exit
    waitForPlayer();
    return 0;
}


/**************************************************
GAME functions
**************************************************/
void playWordScrambler() {
// initialise variables
    string word = "";
    string hint = "";
    string playerWord = "";
    string scrambledWord = "";
    int numHints = MAX_HINTS;
    int wordsLeft = skillLevel + 3;
    int myRand = 0;
    int playerScore = 0;
    bool isGameOver = false;
    bool hasGuessedWord = false;
    cin.ignore();

    // main game loops
    while (!isGameOver) {
        // get a random word and matching hint
        myRand = rand() % wordList.size();
        word = wordList[myRand];
        hint = hintList[myRand];
        hasGuessedWord = false;

        // scramble the selected word
        scrambledWord = scrambleWord(word);

        // start display sequence
        displayPlayerStats(wordsLeft, numHints);
        while (!hasGuessedWord) {
            // clear strings
            playerWord.clear();

            // show scrambled word and ask for player guess
            cout << " The scrambled word is: " << scrambledWord << endl;
            playerWord = askForString("What do you think it is? ");

            // convert to one case to match words in the list
            transform(playerWord.begin(), playerWord.end(), playerWord.begin(), tolower);

            // process player input
            if (playerWord == "h") {
                // show hint or not
                if (numHints > 0) {
                    cout << endl << " The hint for this word is: " << hint << endl;
                    numHints--;
                }
                cout << " " + playerName + ", you have " << numHints << " hints left!\n\n";
            }
            if (playerWord == "s") {
                // rescramble the word
                scrambledWord = scrambleWord(word);
            }
            if (playerWord == "q") {
                // QUIT: must set both to true to exit the loops
                hasGuessedWord = true;
                isGameOver = true;
            }
            if (playerWord.size() > 1) {
                // player has typed in a word not just a letter
                if (playerWord == word) {
                    // player spelt the word correctly
                    myRand = rand() % MAX_LIST;
                    cout << " " + playerName + ", " + rightList[myRand] + "!\n";
                    wordsLeft--;
                    playerScore += word.length() * skillLevel;
                    hasGuessedWord = true;
                }
                else {
                // player made a spelling mistake
                myRand = rand() % MAX_LIST;
                cout << " " + playerName + ", " + wrongList[myRand] + "!\n";
                }
            }
            // completed all their words?
            if (wordsLeft <= 0) {
            cout << "\n You have guessed all your words " + playerName + "!\n\n";
            playerScore += skillLevel * 5;
            playerScore += numHints * 10;
            isGameOver = true;
            }
        }
        waitForPlayer();
        // get another word OR end
    }
    // It's game over, man!
    int wordsDone = (skillLevel + 3) - wordsLeft;
    displayPlayerStats(wordsDone, numHints);
    gameOver();
}

string scrambleWord(string myWord) {
    string scrambled = myWord;
    int length = myWord.length();
    for (int index = 0; index < length; index++) {
        // swap letter at index with a random letter
        int randIndex = rand() % length;
        char letter = scrambled[index];
        scrambled[index] = scrambled[randIndex];
        scrambled[randIndex] = letter;
    }
    return scrambled;
}

void gameOver() {
    char choice = askForLetter("Do you want to play again? (y/n) ");
    if (choice == 'y') {
        system("cls");
        playWordScrambler();
    }
    else {
        quitGame();
    }
}

void quitGame() {
    // display quit message
    cout << "\n\tPerhaps another time will suit you better?\n";
}


/**************************************************
WORKHORSE functions (from other Labs)
**************************************************/

string askForString(string question) {
// gets a line response (spaces included)
    string userInput = "";
    while (userInput == "") {
        cout << "\n " + question;
        getline(cin, userInput);
    }
    return userInput;
}

char askForLetter(string question) {
// ask a single letter response question
    char choice = ' ';
    while (choice == ' ') {
        cout << "\n " << question;
        cin >> choice;
    }
    return tolower(choice);
}

int askForNumber(string question, int low, int high) {
    int num = -99999;
    while (num < low || num > high) {
        cout << "\n " << question << " (" << low << "-" << high << "): ";
        cin >> num;
    }
    return num;
}

void waitForPlayer() {
// wait for player to read
    cout << "\n\t";
    system("pause");
    system("cls");
}


/**************************************************
DISPLAY functions
**************************************************/
void displayTitle() {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\t\tWord Scrambler :: Do you get the hint?\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

void displayPlayerStats(int numWords, int numHints) {
    displayTitle();
    cout << " Player: " << playerName << "\t\tWords Left: " << numWords << "\tHints: " << numHints << "\tScore: " << playerScore << "\n\n";
    cout << " Type [H] for a hint, [S] to rescramble or [Q] to quit.\n\n";
}

void displayText(string myFileName) {
    // local vars
    fstream blurbData(myFileName);
    string line = "";
    // read in file data
    if (blurbData.is_open()) {
        while (!blurbData.eof()) {
            getline(blurbData, line);
            cout << line << "\n";
        }
        blurbData.close();
    }
    waitForPlayer();
}


/**************************************************
INITIALISE functions
**************************************************/

void setPlayerOptions() {
    displayTitle();
    playerName = askForString("Please enter your name: ");
    skillLevel = askForNumber("Please select a skill level", 1, 3);
    cout << "\n Thank you, " << playerName << ". I'll just get everything ready!\n";
    waitForPlayer();
}

void setWordLists(string myFileName) {
    // load the words and hints from a file
    fstream fileToRead(myFileName);
    if (fileToRead.is_open()) {
        string line = "";
        string word = "";
        string hint = "";
        while (!fileToRead.eof()) {
            getline(fileToRead, line);
            // break data into word and hint
            int spc = line.find("~");
            word = line.substr(0, spc);
            hint = line.substr(spc + 1, line.length());
            // add to appropriate lists
            wordList.push_back(word);
            hintList.push_back(hint);
            //cout << word << ": " << hint << "\n";
        }
    }
    // remeber to close file
    fileToRead.close();
}