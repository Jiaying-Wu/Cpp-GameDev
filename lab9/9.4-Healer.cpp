/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Jiaying Wu
Purpose: HEALER Class File
**************************************************/

// header
#include "Healer.h"

Healer::Healer() {
    woundStrike = 0;
}

Healer::Healer(string name) : Character(name) {
    woundStrike = rand() % 10 + (baseAttack / 2);
}

int Healer::attack() { return baseAttack * (woundStrike / 2); }

string Healer::getCharDetails() {
    stringstream charDetails;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Name: " << charName;
    charDetails << "\n Class: Healer";
    charDetails << "\n Health: " << currentHealth << "/" << maxHealth;
    charDetails << "\n Base Attack: " << baseAttack;
    charDetails << "\n Special Attack: " << woundStrike;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return charDetails.str();
}