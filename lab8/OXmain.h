/**************************************************
Project: Noughts and Crosses 1.0
Lab Num: Week 8
Author: Jiaying Wu
Purpose: Driver Header File (using references)
Adapted from code by Michael Dawson
**************************************************/

#ifndef OXMAIN_H
#define OXMAIN_H

// header
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// namespace
using namespace std;

// Global CONSTANTS
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NONE = 'N';
const int MAX_SQRS = 9;

// Game Functions
int askForNumber(string question, int high, int low=0);
char askForLetter(string question);
char setHumanPiece();
char getOpponentPiece(char piece);
char checkGameOver(const vector<char>& board);
bool isMoveLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void displayBoard(const vector<char>& board);
void displayText(string myFileName);
void gameOver(char winner, char human, char computer);
void playOX();
void waitForPlayer();
#endif