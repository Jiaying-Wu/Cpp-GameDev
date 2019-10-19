/**************************************************
Project: LITTLE PIGGY 1
Lab Num: Week 5
Author: Jiaying Wu
Purpose: Driver Class Header
**************************************************/

#ifndef LITTLEPIGGY_H
#define LITTLEPIGGY_H

// header
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>

// namespace
using namespace std;

// declare variable
string playerName1;
string playerName2;
int playerScore1;
int playerScore2;
int currentPlayer;
int diceSize;
int runningTotal;
int targetScore;

// declare function
char askForLetter(string question);
bool checkGameOver();
void displayScores();
void displayText(string myFileName);
void gameOver();
void playLittlePiggy();
void resetGame();
void swapPlayers();
void waitForPlayer();
#endif