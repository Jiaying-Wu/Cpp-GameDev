/**************************************************
Project: RPG Monsters
Lab Num: Week 11
Author: Cheryl Howard / Matt Butler
Purpose: ZOMBIE Class file
**************************************************/

// header
#include "Zombie.h"

int Zombie::numZombies = 0;

Zombie::Zombie(string name, int health) : Monster(name, health) { numZombies++; }

Zombie::~Zombie() { numZombies--; }

int Zombie::getNumZombies() { return numZombies; }

string Zombie::speak() {
    return " Braaaaaaaains";
}

string Zombie::attack() {
    return " The zombie is eating your brains!!!";
}