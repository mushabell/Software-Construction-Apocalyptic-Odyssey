#pragma once
#include <string>
using namespace std;

class Person{
    private:
        string characterName;
        bool knife;
        bool gun;
        string strength;
        string weakness;
        int gameProgressGauge;
    public:
        Person(string characterName, string characterWeakness, string characterStrength);
        void updateGun(bool status);
        void updateKnife(bool status);
        string getName();
        void updateProgress(int level);
        string getStrength();
        string getWeakness();
    };
