/**************************************************
Project: LITTLE PIGGY 2
Lab Num: Week 6
Author: Jiaying Wu
Purpose: Player Class Header
**************************************************/

#ifndef PLAYER_H
#define PLAYER_H

// header
#include <iostream>
#include <string>

// namespaces
using namespace std;

// class
class Player {
public:
// constructor
    Player();
    Player(string name, int score);
    ~Player();
// accessor methods
    string getName();
    int getScore();
// mutator methods
    void resetScore(int newScore);
    void updateScore(int newScore);
private:
// player variables
    string playerName;
    int playerScore;
};
#endif