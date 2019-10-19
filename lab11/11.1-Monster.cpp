/**************************************************
Project: RPG Game 3.0 with Monsters
Lab Num: Week 11
Author: Jiaying Wu
Purpose: MONSTER Class File
**************************************************/

// header
#include "Monster.h"

int Monster::numMonsters = 0;

Monster::Monster() { numMonsters++; }

Monster::Monster(string name, int health) {
    monName = name;
    monHealth = health;
    numMonsters++;
}

Monster::~Monster() { numMonsters--; }

// accessor functions
int Monster::getNumMonsters() { return numMonsters; }

int Monster::getHealth() { return monHealth; }

string Monster::getName() { return monName; }

// class functions
string Monster::speak() {
    return " Rooooaaaaar";
}

string Monster::attack() {
    return " Noooo! Don't hurt me ... I'm your friend!";
}