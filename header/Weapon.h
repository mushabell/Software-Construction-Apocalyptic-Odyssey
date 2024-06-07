#pragma once
#include <string>

using namespace std;



class Weapon{
    protected:
        string type;
    public:
        Weapon(string t) : type(t) {}
        string getType();
};