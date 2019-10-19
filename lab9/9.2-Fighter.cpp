/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Cheryl Howard / Elliot Wilson
Purpose: FIGHTER Class File
**************************************************/

// header
#include "Fighter.h"

Fighter::Fighter() {
    powerPunch = 0;
}

Fighter::Fighter(string name) : Character(name) {
    powerPunch = rand() % 10 + (baseAttack / 2);
}

int Fighter::attack() {
    return baseAttack + powerPunch;
}

string Fighter::getCharDetails() {
    stringstream charDetails;
    charDetails << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Name: " << charName;
    charDetails << "\n Class: Fighter";
    charDetails << "\n Health: " << currentHealth << "/" << maxHealth;
    charDetails << "\n Base Attack: " << baseAttack;
    charDetails << "\n Special Attack: " << powerPunch;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return charDetails.str();
}