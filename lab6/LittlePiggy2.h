/**************************************************
Project: LITTLE PIGGY 2.0
Lab Num: Week 6
Author: Jiaying Wu
Purpose: Driver Class Header
**************************************************/

#ifndef LITTLEPIGGY2_H
#define LITTLEPIGGY2_H

// header
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>
#include "Player.h"

// namespace
using namespace std;
Player player1;
Player player2;
int diceSize;
int runningTotal;
int targetScore;

// declare function
char askForLetter(string question);
bool checkGameOver();
int swapPlayers(int currentPlayer);
void displayScores();
void displayText(string myFileName);
void gameOver();
void playLittlePiggy();
void resetGame();
void setPlayers();
void waitForPlayer();
#endif