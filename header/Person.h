#pragma once
#include <string>
using namespace std;

class Person{
    private:
        string characterName;
        bool knife = false;
        bool gun = false;
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
        bool getGun();
        bool getKnife();
    };
