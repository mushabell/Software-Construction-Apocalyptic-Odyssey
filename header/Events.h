#pragma once

#include <string>
#include <iostream>
#include "person.h"

using namespace std;

class Events{
    private:
        string character;
        int eventNum;
        bool death;
        bool knife;
        bool gun;
    public:
        //constructor
        Events(string& character, int event, bool death, bool knife, bool gun): character(character), eventNum(event), death(death), knife(knife), gun(gun){};
        //functions for each event
        void event1(Person person);
        void event2(Person person);
        void event3(Person person);
        void event4(Person person);
        void event5(Person person);
        //function for what happens when a character dies
        void death(Person person, int event);
};