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
        string path;
    public:
        Person(string characterName, string characterWeakness, string characterStrength);
        string getName() const;
        void updateProgress();
        int getGameProgress() const;
        string getStrength() const;
        string getWeakness() const;
        void addWeapon(string weaponType);
        bool checkWeapon(string weaponType);
        void removeWeapon(string weaponType);
        void addToPath(string choice);
        string getPath()const;
    };
