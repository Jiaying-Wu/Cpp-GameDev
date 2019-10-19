/**************************************************
Project: RPG Monsters
Lab Num: Week 11
Author: Jiaying Wu
Purpose: RPGMONSTERS Driver Class
**************************************************/

// header
#include <vector>
#include "Monster.h"
#include "Vampire.h"
#include "Zombie.h"

// namespace
using namespace std;

// declare function
void makeSomeMonsters();
void makeMonstersWork();
void makeMonsterParty();

// main function
int main() {
    // testing out the Monster Classes
    makeSomeMonsters();
    // testing class functionality
    makeMonstersWork();
    // delving in the dungeon
    makeMonsterParty();
    // wait and exit
    system("pause");
    return 0;
}

void makeSomeMonsters() {
    // create a monster or three
    Monster m1 = Monster("Frankenstein", 50);
    Vampire v1 = Vampire("Vlad", 80);
    Zombie z1 = Zombie("Fred", 5);

    // see what they have to say for themselves
    cout << "\n The MONSTER count is: " << m1.getNumMonsters();
    cout << "\n " << m1.getName() << " says" << m1.speak();
    cout << "\n The VAMPIRE count is: " << v1.getNumVampires();
    cout << "\n " << v1.getName() << " says" << v1.speak();
    cout << "\n The ZOMBIE count is: " << z1.getNumZombies();
    cout << "\n " << z1.getName() << " says" << z1.speak() << endl;
    system("pause");
}

void makeMonstersWork() {
    // testing class functions
    Monster m1 = Monster("Frankenstein", 50);
    Monster *m2 = new Vampire("Vlad", 80);

    // have them speak
    cout << "\n " << m1.getName() << " says" << m1.speak();
    cout << "\n " << m2->getName() << " says" << m2->speak() << endl;

    // manual memory management
    delete m2;
    m2 = NULL;
    system("pause");
}

void makeMonsterParty() {
    // Let's party, people!
    vector<Monster*> party;
    party.push_back(new Monster("Frankenstein", 50));
    party.push_back(new Vampire("Vlad", 80));
    party.push_back(new Zombie("Fred", 5));

    // let them all speak
    cout << "\n The Monster Party Speaks:";
    for (unsigned int i = 0; i < party.size(); i++) {
        cout << "\n " << party[i]->getName() << " says" << party[i]->speak() << endl;
    }

    // let them all attack
    cout << "\n The Monster Party Attacks:";
    for (unsigned int i = 0; i < party.size(); i++) {
        cout << "\n " << party[i]->getName() << ":" << party[i]->attack() << endl;
    }

    // manual memory management
    // let them all disappear
    for (int i = party.size() - 1; i >= 0; i--) {
        delete party[i];
        party[i] = NULL;
    }
}