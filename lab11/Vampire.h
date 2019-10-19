/**************************************************
Project: RPG Monsters
Lab Num: Week 11
Author: Jiaying Wu
Purpose: VAMPIRE Class Header
**************************************************/

#ifndef VAMPIRE_H
#define VAMPIRE_H

// header
#include "Monster.h"
class Vampire : public Monster {
private:
    static int numVampires;
public:
    Vampire(string name, int health);
    ~Vampire();
// accessor functions
    static int getNumVampires();
// functions
    virtual string speak();
    virtual string attack();
};
#endif