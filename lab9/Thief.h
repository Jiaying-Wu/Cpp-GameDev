/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Cheryl Howard / Elliot Wilson
Purpose: THIEF Class Header
**************************************************/

#ifndef THIEF_H
#define THIEF_H

//header
#include "Character2.h"

class Thief : public Character {
private:
    int backStab;
public:
    Thief();
    Thief(string name);
    int attack();
    string getCharDetails();
};
#endif