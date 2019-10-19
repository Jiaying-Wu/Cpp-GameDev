/**************************************************
Project: RPG Game 1.0
Lab Num: Week 7
Author: Cheryl Howard / Josh Olsen
Purpose: Character Class File
**************************************************/

// header
#include "Item.h"

Item::Item() {
    // Default constructor
    itemName = "Undefined";
    itemType = NONE;
    pointModifier = 0;
}

Item::Item(string newName, ItemType type, int modifier) {
    // Set values based off input
    itemName = newName;
    itemType = type;
    pointModifier = modifier;
}

Item::~Item() {
// Nothing for now
}

// ACCESSOR FUNCTIONS
// Written like this to reduce space in this document
string Item::getItemName() { return itemName; }

ItemType Item::getTypeNum() { return itemType; }

string Item::getTypeName() {
    // Return string depending on itemType value
    switch (itemType) {
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

int Item::getPointsMod() { return pointModifier; }

string Item::getItemDetails() {
// Returns a formatted string containing information on the item.
    stringstream itemDetails;
    itemDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    itemDetails << "\nItem Name: " << itemName;
    itemDetails << "\nItem Type: " << getTypeName();
    itemDetails << "\nModifier : " << pointModifier;
    itemDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return itemDetails.str();
}

// MUTATOR FUNCTIONS
void Item::setName(string newName) {
// Make sure that the type is valid
    if (newName.length() > 0) {
        itemName = newName;
    }
}

void Item::setItemType(ItemType newType) {
// Make sure that the type is valid
// Assumption here that none is invalid. Should never be set.
    if (newType > NONE && newType <= TREASURE) {
        itemType = newType;
    }
}

void Item::setPointsMod(int newPoints) {
// Currently no validation.
// May be changed in future (no negative numbers?)
    pointModifier = newPoints;
}