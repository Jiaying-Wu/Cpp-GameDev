/**************************************************
Project: RPG Monsters
Lab Num: Week 11
Author: Jiaying Wu
Purpose: MONSTER Class Header
**************************************************/

#ifndef MONSTERS_H
#define MONSTERS_H

// header
#include <iostream>
#include <string>

// namespace
using namespace std;

// class
class Monster {
protected:
    static int numMonsters;
    string monName;
    int monHealth;

public:
    Monster();
    Monster(string name, int health);
    ~Monster();

    // accessor methods
    static int getNumMonsters();
    string getName();
    int getHealth();

    // functions
    virtual string speak();
    virtual string attack();
};
#endif