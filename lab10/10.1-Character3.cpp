/**************************************************
Project: RPG Game 3.0
Lab Num: Week 10
Author: Jiaying Wu
Purpose: Character Class File
**************************************************/

// header
#include "Character3.h"

Character::Character() {}

Character::Character(string newName, CharType newType) {
    // usual creation constructor
    charName = new string(newName);
    charType = new CharType(newType);
    setInitialStats();
    itemCount = new int(0);
    inventory[MAX_ITEMS];
}

// Destructor
Character::~Character() {
    // remove from the heap
    delete charName;
    delete charType;
    delete charHealth;
    delete charStrength;
    delete charDexterity;
    delete charIntelligence;
    delete itemCount;
}

// ACCESSOR FUNCTIONS
string Character::getCharName() { return *charName; }

CharType Character::getTypeNum() { return *charType; }

int Character::getHealth() { return *charHealth; }

int Character::getStrength() { return *charStrength; }

int Character::getDexterity() { return *charDexterity; }

int Character::getIntelligence() { return *charIntelligence; }

int Character::getItemCount() { return *itemCount; }

string Character::getTypeName() {
    switch (*charType) {
        case WIZARD:
            return "Wizard";
        case HEALER:
            return "Healer";
        case THIEF:
            return "Thief";
        case FIGHTER:
            return "Fighter";
        default:
            return "Oops: no assigned type";
    }
}

string Character::getCharDetails() {
// returns a formatted string
    stringstream charDetails;
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    charDetails << "\n Character Name: " << *charName;
    charDetails << "\n Character Type: " << getTypeName();
    charDetails << "\n Health: " << *charHealth;
    charDetails << "\n Strength: " << *charStrength;
    charDetails << "\n Dexterity: " << *charDexterity;
    charDetails << "\n Intelligence: " << *charIntelligence;
    charDetails << "\n Inventory: " << getInvContents();
    charDetails << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    return charDetails.str();
}

// MUTATOR FUNCTIONS
void Character::setCharName(string newName) {
    if (newName.length() > 0) {
        *charName = newName;
    }
}
void Character::addInventory(Item* newItem) {
    if (*itemCount < MAX_ITEMS) {
        inventory[*itemCount] = newItem;
        *itemCount = *itemCount + 1;
    } else {
        cout << "\n You have reached your maximum carrying capacity.\n";
    }
}
// PRIVATE FUNCTIONS
void Character::setInitialStats() {
// Generate random values for each character attributes using defaults
    charStrength = new int(rand() % MAX_STATS + MIN_STATS);
    charDexterity = new int(rand() % MAX_STATS + MIN_STATS);
    charHealth = new int(rand() % MAX_STATS + MIN_STATS);
    charIntelligence = new int(rand() % MAX_STATS + MIN_STATS);
}
string Character::getInvContents() {
// Return string of the character’s inventory
    string contents = "";
    if (*itemCount == 0) {
        contents = "You are carrying nothing.";
    } else {
        for (int index = 0; index < *itemCount; index++) {
            contents += inventory[index]->getItemName() + ", ";
        }
    }
    return contents;
}