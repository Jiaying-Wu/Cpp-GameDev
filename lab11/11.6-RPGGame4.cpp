/**************************************************
Project: RPG Game 4.0 with Inheritance
Lab Num: Week 9 and Week 11
Author: Cheryl Howard / Elliot Wilson
Purpose: TEST DRIVER Class file
**************************************************/

// header
#include <iostream>
#include <ctime>
#include <vector>
#include "Character3.h"
#include "Wizard.h"
#include "Healer.h"
#include "Thief.h"
#include "Fighter.h"
#include "Boss.h"

// name space
using namespace std;

// main function
int main() {
    // initialise randoms
    srand(unsigned(time(NULL)));

    // create the party first with one of each character type
    vector<Character*> party;
    party.push_back(new Fighter("Helmhewer"));
    party.push_back(new Thief ("Wharf Rat"));
    party.push_back(new Healer ("Florance"));
    party.push_back(new Wizard ("Merlin"));
    party.push_back(new Character ("Joe Bloggs"));

    // create a new Boss
    Boss *boss = new Boss("The Dark Lord");

    // simulate the battle
    cout << " The party encounters THE BOSS\n";
    cout << boss->getCharDetails();
    cout << "\n and have caught him on a bad day ... oops!";
    cout << "\n So now ... there's gonna be a fight!\n\n";
    int bossAttack = boss->attack();
    for (unsigned int i = 0; i < party.size(); i++) {
        cout << party[i]->getCharDetails();
        int attackVal = party[i]->attack();
        cout << " They attack the BOSS for: " << attackVal << endl;
        if (boss->getHealth() > 0) {
            boss->takeHit(attackVal);
            cout << "\n and hit back for: " << bossAttack << endl;
            else {
                cout << "\n The BOSS is slain ... so let's get out of here!";
                break;
            }
        }

        // display the end of battle stats
        cout << boss->getCharDetails();
        for (unsigned int i = 0; i < party.size(); i++) {
            cout << party[i]->getCharDetails();
        }

        // manual memory management - make them all disappear
        delete boss;
        boss = NULL;
        for (int i = party.size() - 1; i >= 0; i--) {
            delete party[i];
            party[i] = NULL;
        }
    }

    // wait and exit
    system("pause");
    return 0;
}