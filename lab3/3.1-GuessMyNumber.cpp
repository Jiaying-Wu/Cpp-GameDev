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