/**************************************************
Project: LITTLE PIGGY 2
Lab Num: Week 6
Author: Jiaying Wu
Purpose: Player Class Header
**************************************************/

// header
#include "Player.h"

Player::Player(){}

Player::Player(string name, int score){
    playerName = name;
    playerScore = score;
}

Player::~Player() {}

// ACCESSOR METHODS
string Player::getName() {
    return playerName;
}

int Player::getScore() {
    return playerScore;
}

// MUTATOR METHODS
void Player::resetScore(int newScore) {
    playerScore = newScore;
}

void Player::updateScore(int newScore) {
    playerScore += newScore;
}

