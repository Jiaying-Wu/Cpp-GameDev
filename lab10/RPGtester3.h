/**************************************************
Project: RPG Game 3.0
Lab Num: Week 10
Author: Jiaying Wu
Purpose: RPG Test Driver Header File
**************************************************/

#ifndef RPGTESTER3_H
#define RPGTESTER3_H

// header
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Enums.h"
#include "Item3.h"
#include "Character3.h"

// namespace
using namespace std;

// declare variable
vector<Character*> gamePlayers;
vector<Item*> gameItems;

// declare function
void addCharacters();
void addItems();
void displayCharacters();
void displayItems();
void findItem(int whichPlayer);
void searchForItems();
#endif