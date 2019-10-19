/**************************************************
Project: RPG Monsters
Lab Num: Week 11
Author: Jiaying Wu
Purpose: ZOMBIE Class Header
**************************************************/
#ifndef ZOMBIE_H
#define ZOMBIE_H

// header
#include "Monster.h"

// class
class Zombie : public Monster {
private:
    static int numZombies;

public:
    Zombie(string name, int health);
    ~Zombie();

    // accessor functions
    static int getNumZombies();

    // functions
    virtual string speak();
    virtual string attack();
};
#endif