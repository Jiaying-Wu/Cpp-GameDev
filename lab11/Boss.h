/**************************************************
Project: RPG Game 3.0 with Inheritance
Lab Num: Week 11
Author: Cheryl Howard / Elliot Wilson
Purpose: FIGHTER Class Header
**************************************************/
#ifndef BOSS_H
#define BOSS_H

// header
#include "Character3.h"

// class
class Boss : public Character {
private:
    int superStrength;
public:
    Boss();
    Boss(string name);
    virtual int getHealth();
    virtual int attack();
    virtual string getCharDetails();
};
#endif
