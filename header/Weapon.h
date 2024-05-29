#pragma once
#include <string>

using namespace std;



class Weapon{
    protected:
        string story;
        string type;
    public:
        Weapon(string s, string t) : story(s), type(t) {}
        string getStory();
        string getType();
};