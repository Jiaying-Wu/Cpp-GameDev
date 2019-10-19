/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Jiaying
Purpose: FIGHTER Class Header
**************************************************/

#ifndef FIGHTER_H
#define FIGHTER_H

// header
#include "Character2.h"

class Fighter : public Character {
private:
    int powerPunch;
public:
    Fighter();
    Fighter(string name);
    int attack();
    string getCharDetails();
};
#endif