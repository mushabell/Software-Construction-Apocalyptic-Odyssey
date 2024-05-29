#pragma once
#include <string>

using namespace std;



class Weapon{
    protected:
        string WeaponStory;
    public:
        Weapon(string WeaponStory) : WeaponStory(WeaponStory){}
        string getstory();
};