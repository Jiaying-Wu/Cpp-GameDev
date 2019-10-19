/**************************************************
Project: RPG Game 2.0 with Inheritance
Lab Num: Week 9
Author: Cheryl Howard / Elliot Wilson
Purpose: TEST DRIVER Class file
**************************************************/

// header
#include <iostream>
#include <ctime>
#include <vector>
#include "Character.h"
#include "Wizard.h"
#include "Healer.h"
#include "Thief.h"
#include "Fighter.h"

// namespace
using namespace std;

// main function
int main() {
    // initialise randoms
    srand(unsigned(time(NULL)));

    // create one of each character type
    Fighter char01("Helmhewer");
    Thief char02("Wharf Rat");
    Healer char03("Florance");
    Wizard char04("Merlin");
    Character char05("Joe Bloggs");

    // display character details
    cout << char01.getCharDetails();
    cout << char02.getCharDetails();
    cout << char03.getCharDetails();
    cout << char04.getCharDetails();
    cout << char05.getCharDetails();

    // wait and exit
    system("pause");
    return 0;
}