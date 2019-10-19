/**************************************************
Project: RPG Game 3.0
Lab Num: Week 10
Author: Jiaying Wu
Purpose: RPG Test Driver Class File
**************************************************/

// header
#include "RPGtester3.h"

int main() {
// testing classes
    srand(unsigned(time(NULL)));
// create and add a few characters
    addCharacters();
// create and add a few items
    addItems();
// find some items, add to player’s inventory
    searchForItems();
// display each item's details
    displayItems();
// display each player's character details
    displayCharacters();
// wait then exit
    system("pause");
    return 0;
}
void addCharacters() {
    gamePlayers.clear();
    gamePlayers.push_back(new Character("Helmhewer", FIGHTER));
    gamePlayers.push_back(new Character("Wharf Rat", THIEF));
    gamePlayers.push_back(new Character("Elfindor", HEALER));
    gamePlayers.push_back(new Character("Bumbledor", WIZARD));
}

void addItems() {
    gameItems.clear();
    gameItems.push_back(new Item("dagger", WEAPON, 10));
    gameItems.push_back(new Item("Vitalix", POTION, 5));
    gameItems.push_back(new Item("ruby pendant", TREASURE, 15));
    gameItems.push_back(new Item("sword", WEAPON, 20));
    gameItems.push_back(new Item("Tome of Spells", MAGIC, 50));
}

void displayCharacters() {
    if (gamePlayers.size() > 0) {
        for (unsigned int index = 0; index < gamePlayers.size(); index++) {
            cout << gamePlayers[index]->getCharDetails();
        }
        cout << endl;
    } else {
        cout << "There are no PLAYERS yet!\n";
    }
}

void displayItems() {
    if (gameItems.size() > 0) {
        for (unsigned int index = 0; index < gameItems.size(); index++) {
            cout << gameItems[index]->getItemDetails();
        }
        cout << endl;
    } else {
        cout << "There are no ITEMS yet!\n";
    }
}

void findItem(int whichPlayer) {
    if (gameItems.size() > 0) {
        int itemNum = rand() % gameItems.size();
        gamePlayers[whichPlayer]->addInventory(gameItems[itemNum]);
    } else {
        cout << "There are no ITEMS to find!\n";
    }
}
void searchForItems() {
    if (gameItems.size() > 0) {
        for (unsigned int i = 0; i < gamePlayers.size(); i++) {
            int whichPlayer = rand() % gamePlayers.size();
            findItem(whichPlayer);
        }
    } else {
        cout << "There is nothing worth searching for ...";
    }
}