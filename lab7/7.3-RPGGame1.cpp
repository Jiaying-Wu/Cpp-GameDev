/**************************************************
Project: RPG Game 1.0
Lab Num: Week 7
Author: Cheryl Howard
Purpose: RPG Driver Class File
**************************************************/

// header
#include " RPGtester.h"

// main function
int main() {
    // testing classes
    srand(unsigned(time(NULL)));

    // create and add a few characters
    Character char01("Helmhewer", FIGHTER);
    Character char02("Wharf Rat", THIEF);
    Character char03("Elfindor", HEALER);
    Character char04("Bumbledor", WIZARD);
    addCharacter(char01);
    addCharacter(char02);
    addCharacter(char03);
    addCharacter(char04);

    // display each player's character details
    displayCharacters();

    // create and add a few items
    Item item01("dagger", WEAPON, 10);
    Item item02("Vitalix", POTION, 5);
    Item item03("ruby pendant", TREASURE, 15);
    Item item04("sword", WEAPON, 20);
    Item item05("Tome of Spells", MAGIC, 50);
    addItem(item01);
    addItem(item02);
    addItem(item03);
    addItem(item04);
    addItem(item05);

    // display each item's details
    displayItems();

    // find some items for the players
    for (int i = 0; i < gamePlayers.size(); i++) {
        int whichPlayer = rand() % gamePlayers.size();
        findItem(whichPlayer);
    }

    // display each player's character details
    displayCharacters();

    // wait then exit
    system("pause");
    return 0;
}

void addCharacter(Character newPlayer) {
    gamePlayers.push_back(newPlayer);
}

void addItem(Item newItem) {
    gameItems.push_back(newItem);
}

void findItem(int whichPlayer) {
    int itemNum = rand() % gameItems.size();
    gamePlayers[whichPlayer].addInventory(gameItems[itemNum]);
}

void displayCharacters() {
    vector<Character>::iterator iter;
    for (iter = gamePlayers.begin(); iter != gamePlayers.end(); iter++) {
        cout << iter->getCharDetails() << endl;
    }
}

void displayItems() {
    vector<Item>::iterator iter;
    for (iter = gameItems.begin(); iter != gameItems.end(); iter++) {
        cout << iter->getItemDetails() << endl;
    }
}
