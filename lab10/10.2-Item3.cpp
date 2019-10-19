/**************************************************
Project: RPG Game 3.0
Lab Num: Week 10
Author: Jiaying Wu
Purpose: Character Class File
**************************************************/

// header
#include "Item3.h"

Item::Item() {}

Item::Item(string newName, ItemType type, int modifier) {
    // Set values based on input
    itemName = new string(newName);
    itemType = new ItemType(type);
    pointModifier = new int(modifier);
}

Item::~Item() {
    // remove from the heap
    delete itemName;
    delete itemType;
    delete pointModifier;
}

// ACCESSOR FUNCTIONS
string Item::getItemName() { return *itemName; }

ItemType Item::getTypeNum() { return *itemType; }

int Item::getPointsMod() { return *pointModifier; }

string Item::getTypeName() {
    // Return string depending on itemType value
    switch (*itemType) {
        case WEAPON:
            return "Weapon";
        case POTION:
            return "Potion";
        case MAGIC:
            return "Magical";
        case TREASURE:
            return "Treasure";
        default:
            return "None";
    }
}

string Item::getItemDetails() {
// Returns a formatted string containing information on the item.
    stringstream itemDetails;
    itemDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    itemDetails << "\n Item Name: " << *itemName;
    itemDetails << "\n Item Type: " << getTypeName();
    itemDetails << "\n Modifier : " << *pointModifier;
    itemDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return itemDetails.str();
}

// MUTATOR FUNCTIONS
void Item::setItemName(string newName) {
// Make sure that the type is valid
    if (newName.length() > 0) {
        *itemName = newName;
    }
}

void Item::setItemType(ItemType newType) {
    // Make sure that the type is valid
    // Assumption here that none is invalid. Should never be set.
    if (newType > NONE && newType <= TREASURE) {
        *itemType = newType;
    }
}

void Item::setPointsMod(int newPoints) {
    // Currently no validation.
    // May be changed in future (no negative numbers?)
    *pointModifier = newPoints;
}