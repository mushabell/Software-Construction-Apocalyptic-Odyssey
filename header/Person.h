#pragma once
#include <string>
using namespace std;

class Person{
    private:
        string Character;
        bool knife;
        bool gun;
        string strength;
        string weakness;
        int gameProgressGauge;
    public:
        Person(string CharacterName, string CharacterWeakness, string CharacterStrength);
        void updateGun(bool status);
        void updateKnife(bool status);
    };
