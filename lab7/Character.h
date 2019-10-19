/**************************************************
Project: RPG Game 1.0
Lab Num: Week 7
Author: Jiaying Wu
Purpose: Character Class Header
**************************************************/

#ifndef CHARACTER_H
#define CHARACTER_H

// header
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <vector>
#include "Item.h"
#include "Enums.h"

// namespace
using namespace std;

// class
class Character {
private:
    // Variables
    string charName;
    CharacterType charType;
    int charHealth;
    int charStrength;
    int charDexterity;
    int charIntelligence;
    vector<Item> inventory;

    // Static Const Variables
    static const int MIN_STATS = 3;
    static const int MAX_STATS = 6;
    static const int MAX_ITEMS = 10;

    // Private Functions
    void setInitialStats();
    string getInvContents();

public:
    // Constructors
    Character();
    Character(string newName, CharacterType newType);

    // Destructor
    ~Character();

    // Accessor Functions
    string getCharName();
    string getTypeName();
    CharacterType getTypeNum();
    string getCharDetails();
    int getHealth();
    int getStrength();
    int getDexterity();
    int getIntelligence();

    // Mutator Functions
    void setCharName(string newName);
    void addInventory(Item newItem);
};
#endif