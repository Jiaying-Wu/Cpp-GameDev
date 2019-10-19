/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Jiaying Wu
Purpose: Character Class Header
**************************************************/

#ifndef CHARACTER_H
#define CHARACTER_H

// header
#include <string>
#include <sstream>

// name space
using namespace std;

// class
class Character {
protected:
    string charName;
    int baseAttack;
    int currentHealth;
    int maxHealth;
public:
    Character();
    Character(string name);

// class functions available to all Character Types
    void takeHit(int damage);
    int attack();
    string getCharDetails();
};
#endif