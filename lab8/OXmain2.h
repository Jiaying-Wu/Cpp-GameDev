/**************************************************
Project: Noughts and Crosses 2.0
Lab Num: Week 8
Author: Jiaying Wu
Purpose: Driver Header File (using pointers)
Adapted from code by Michael Dawson
**************************************************/

#ifndef OXMAIN2_H
#define OXMAIN2_H

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
int numAnswer(string question, int high, int low=0);
char charAnswer(string question);
char setHumanPiece();
char getOpponentPiece(char piece);
char checkGameOver(const vector<char>* board);
bool isMoveLegal(const vector<char>* board, int move);
int humanMove(const vector<char>* board, char human);
int computerMove(vector<char> board, char computer);
void displayBoard(const vector<char>* board);
void displayText(string myFileName);
void gameOver(char winner, char human, char computer);
void playOX();
void waitForPlayer();
#endif