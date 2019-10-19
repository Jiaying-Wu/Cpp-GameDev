/**************************************************
Project: RPG Monsters
Lab Num: Week 11
Author: Jiaying Wu
Purpose: VAMPIRE Class File
**************************************************/

// header
#include "Vampire.h"

int Vampire::numVampires = 0;

Vampire::Vampire(string name, int health) : Monster(name, health) { numVampires++; }

Vampire::~Vampire() { numVampires--; }

int Vampire::getNumVampires() { return numVampires; }

string Vampire::speak() {
    return " I want to suck your blood!";
}

string Vampire::attack() {
    return " The vampire is sucking your blood ...";
}