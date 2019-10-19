/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Jiaying Wu
Purpose: WIZARD Class Header
**************************************************/

#ifndef WIZARD_H
#define WIZARD_H

// header
#include "Character2.h"

class Wizard : public Character {
private:
    int arcanePower;
public:
    Wizard();
    Wizard(string name);
    int attack();
    string getCharDetails();
};
#endif