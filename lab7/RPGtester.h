/**************************************************
Project: RPG Game 1.0
Lab Num: Week 7
Author: Jiaying Wu
Purpose: RPG Test Driver Header File
**************************************************/

#ifndef RPGTESTER_H
#define RPGTESTER_H

// header
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Enums.h"
#include "Item.h"
#include "Character.h"

// namespace
using namespace std;

// declare variable
vector<Character>gamePlayers;
vector<Item>gameItems;

// declare function
void addCharacter(Character newCharacter);
void addItem(Item newItem);
void findItem(int whichCharacter);
void displayCharacters();
void displayItems();
#endif
