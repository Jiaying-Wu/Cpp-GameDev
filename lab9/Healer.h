/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Cheryl Howard / Elliot Wilson
Purpose: HEALER Class Header
**************************************************/

#ifndef HEALER_H
#define HEALER_H

// header
#include "Character2.h"

class Healer : public Character {
private:
    int woundStrike;
public:
    Healer();
    Healer(string name);
    int attack();
    string getCharDetails();
};
#endif