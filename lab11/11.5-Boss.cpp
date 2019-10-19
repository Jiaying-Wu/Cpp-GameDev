/**************************************************
Project: RPG Game 4.0 with Inheritance
Lab Num: Week 11
Author: Cheryl Howard / Elliot Wilson
Purpose: FIGHTER Class File
**************************************************/

// header
#include "Boss.h"
#include <sstream>

Boss::Boss() {
    superStrength = 0;
}

Boss::Boss(string name) : Character(name) {
    maxHealth *= 2;
    currentHealth = maxHealth;
    superStrength = (rand() % 5 + 5) + (baseAttack * 2);
}

int Boss::getHealth() { return currentHealth; }

int Boss::attack() { return baseAttack + superStrength; }

string Boss::getCharDetails() {
    stringstream charDetails;
    charDetails << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Name: " << charName;
    charDetails << "\n Class: BOSS";
    charDetails << "\n Health: " << currentHealth << "/" << maxHealth;
    charDetails << "\n Base Attack: " << baseAttack;
    charDetails << "\n Special Attack: " << superStrength;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return charDetails.str();
}