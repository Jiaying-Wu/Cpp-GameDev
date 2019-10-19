/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Jiaying Wu
Purpose: THIEF Class File
**************************************************/

// header
#include "Thief.h"


Thief::Thief() {
    backStab = 0;
}

Thief::Thief(string name) : Character(name) {
    backStab = rand() % 10 + (baseAttack / 2);
}

int Thief::attack() { return baseAttack + (backStab / 2); }

string Thief::getCharDetails() {
    stringstream charDetails;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Name: " << charName;
    charDetails << "\n Class: Thief";
    charDetails << "\n Health: " << currentHealth << "/" << maxHealth;
    charDetails << "\n Base Attack: " << baseAttack;
    charDetails << "\n Special Attack: " << backStab;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return charDetails.str();
}