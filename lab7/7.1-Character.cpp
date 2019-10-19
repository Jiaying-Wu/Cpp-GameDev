/**************************************************
Project: RPG Game 1.0
Lab Num: Week 7
Author: Jiaying Wu
Purpose: Character Class File
**************************************************/

// header
#include "Character.h"

Character::Character() {
// Default constructor
    charName = "Anoni Mouse";
    charType = NOTHING;
    charHealth = 0;
    charStrength = 0;
    charDexterity = 0;
    charIntelligence = 0;
    inventory.clear();
}

Character::Character(string newName, CharacterType newType) {
// Usual creation constructor
    charName = newName;
    charType = newType;
    setInitialStats();
    inventory.clear();
}

// Destructor
Character::~Character() { // Nothing for now }

// ACCESSOR FUNCTIONS
// Written like this to reduce space in this document
string Character::getCharName() { return charName; }
CharacterType Character::getTypeNum() { return charType; }
int Character::getHealth() { return charHealth; }
int Character::getStrength() { return charStrength; }
int Character::getDexterity() { return charDexterity; }
int Character::getIntelligence() { return charIntelligence; }

string Character::getTypeName() {
    // Return string depending on charType value
    switch (charType) {
        case WIZARD:
            return "Wizard";
        case HEALER:
            return "Healer";
        case THIEF:
            return "Thief";
        case FIGHTER:
            return "Fighter";
        default:
            return "Oops - no assigned type";
    }
}

string Character::getCharDetails() {
    // returns a formatted string
    stringstream charDetails;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Character Name: " << charName;
    charDetails << "\n Character Type: " << getTypeName();
    charDetails << "\n Health: " << charHealth;
    charDetails << "\n Strength: " << charStrength;
    charDetails << "\n Dexterity: " << charDexterity;
    charDetails << "\n Intelligence: " << charIntelligence;
    charDetails << "\n Inventory: " << getInvContents();
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n ";
    return charDetails.str();
}

// MUTATOR FUNCTIONS
void Character::setCharName(string newName) {
    if (newName.length() > 0) {
        charName = newName;
    }
}

void Character::addInventory(Item newItem) {
    if (newItem.getName().length() > 0) {
        inventory.push_back(newItem);
    }
}

// PRIVATE FUNCTIONS
void Character::setInitialStats() {
    // Generate random values for each character attributes using defaults
    charStrength = rand() % MAX_STATS + MIN_STATS;
    charDexterity = rand() % MAX_STATS + MIN_STATS;
    charHealth = rand() % MAX_STATS + MIN_STATS;
    charIntelligence = rand() % MAX_STATS + MIN_STATS;
}

string Character::getInvContents() {
    // Return string of the character’s inventory
    string contents = "";
    if (inventory.size() == 0) {
        contents = "You are carrying nothing.";
    } else {
        vector<Item>::iterator iter;
        for (iter = inventory.begin(); iter != inventory.end(); iter++) {
            contents += iter->getName() + ", ";
        }
    }
    return contents;
}