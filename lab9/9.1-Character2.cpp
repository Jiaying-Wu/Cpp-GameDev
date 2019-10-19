/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Cheryl Howard / Elliot Wilson
Purpose: Character Class File
**************************************************/

// header
#include "Character2.h"

Character::Character() {
    charName = "Undefined";
    baseAttack = 0;
    currentHealth = 0;
    maxHealth = 0;
}

Character::Character(string name) {
    charName = name;
    baseAttack = rand() % 5 + 5;
    maxHealth = rand() % 11 + 25;
    currentHealth = maxHealth;
}

int Character::attack() { return baseAttack; }

void Character::takeHit(int amount) {
    currentHealth -= amount;
    if (currentHealth > maxHealth) {
        currentHealth = maxHealth;
    } else if (currentHealth < 0) {
        currentHealth = 0;
    }
}

string Character::getCharDetails() {
    stringstream charDetails;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Name: " << charName;
    charDetails << "\n Class: No Class";
    charDetails << "\n Health: " << currentHealth << "/" << maxHealth;
    charDetails << "\n Base Attack: " << baseAttack;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return charDetails.str();
}