/**************************************************
Project: RPG Game 1.0
Lab Num: Week 7
Author: Jiaying Wu
Purpose: Item Class Header
**************************************************/

#ifndef ITEM_H
#define ITEM_H

// header
#include <iostream>
#include <sstream>
#include <string>
#include "Enums.h"

// namespace
using namespace std;

// class
class Item {
private:
    // Class variables
    string itemName;
    ItemType itemType;
    int pointModifier;

public:
    // Constructors
    Item();
    Item(string newName, ItemType type, int modifier);

    // Destructor
    ~Item();

    // Accessor Functions
    string getItemName();
    ItemType getTypeNum();
    string getTypeName();
    string getItemDetails();
    int getPointsMod();

    // Mutator Functions
    void setName(string newName);
    void setItemType(ItemType newType);
    void setPointsMod(int newPoints);
};
#endif