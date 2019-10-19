/**************************************************
Project: RPG Game 3.0
Lab Num: Week 10
Author: Jiaying Wu
Purpose: Character Class Header
**************************************************/

#ifndef CHARACTER3_H
#define CHARACTER3_H

// header
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <array>
#include "Item3.h"
#include "Enums.h"

// name space
using namespace std;

// class
class Character {
private:
    // Static Const Variables
    static const int MIN_STATS = 3;
    static const int MAX_STATS = 6;
    static const int MAX_ITEMS = 10;

    // Variables
    string *charName;
    CharType *charType;
    int *charHealth;
    int *charStrength;
    int *charDexterity;
    int *charIntelligence;
    int *itemCount;
    Item *inventory[MAX_ITEMS];

    // Private Functions
    void setInitialStats();
    string getInvContents();

public:
    // Constructors
    Character();
    Character(string newName, CharType newType);

    // Destructor
    ~Character();

    // Accessor Functions
    string getCharName();
    string getTypeName();
    CharType getTypeNum();
    string getCharDetails();
    int getHealth();
    int getStrength();
    int getDexterity();
    int getIntelligence();
    int getItemCount();

    // Mutator Functions
    void setCharName(string newName);
    void addInventory(Item *newItem);
};
#endif