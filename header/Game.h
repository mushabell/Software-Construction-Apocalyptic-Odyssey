#pragma once

#include <string>
#include <iostream>
#include "Person.h"
#include "Display.h"
//#include "Progress.h"

using namespace std;

class Game{
    private:
        string character;
        int eventNum; 
        bool death;
        bool knife;
        bool gun;
        //functions for each event
        void event1(Person person, Display dis);
        void event2(Person person, Display dis);
        void event3(Person person, Display dis);
        void event4(Person person, Display dis);
        void event5(Person person, Display dis);
        //function for what happens when a character dies
        void die(Person person, int event);
    public:
        //constructor
        Game(string& character, int event, bool death, bool knife, bool gun): character(character), eventNum(event), death(death), knife(knife), gun(gun){};
        void BeginEvent(Person person, Display dis);
};