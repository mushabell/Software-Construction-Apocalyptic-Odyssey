#pragma once
#include <string>
#include<vector>
#include "Weapon.h"
using namespace std;

class Person{
    private:
        string characterName;
        vector<Weapon> weapons;
        string strength;
        string weakness;
        int gameProgressGauge;
    public:
        Person(string characterName, string characterWeakness, string characterStrength);
        void updateGun(bool status);
        void updateKnife(bool status);
        string getName() const;
        void updateProgress(int level);
        string getStrength() const;
        string getWeakness() const;
        void addWeapon(string &weaponType);
        bool checkWeapon(string &weaponType);
        void removeWeapon(string &weaponType);
    };
