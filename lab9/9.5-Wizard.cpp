/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Cheryl Howard / Elliot Wilson
Purpose: WIZARD Class File
**************************************************/

// header
#include "Wizard.h"

Wizard::Wizard(){
    arcanePower = 0;
}

Wizard::Wizard(string name) : Character(name) {
    arcanePower = rand() % 10 + (baseAttack / 2);
}

int Wizard::attack() { return (arcanePower * (baseAttack / 3)); }

string Wizard::getCharDetails() {
    stringstream charDetails;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Name: " << charName;
    charDetails << "\n Class: Wizard";
    charDetails << "\n Health: " << currentHealth << "/" << maxHealth;
    charDetails << "\n Base Attack: " << baseAttack;
    charDetails << "\n Special Attack: " << arcanePower;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return charDetails.str();
}