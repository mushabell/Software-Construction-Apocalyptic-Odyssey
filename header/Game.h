#pragma once

#include <string>
#include <iostream>
#include "Person.h"
#include "Display.h"
//#include "Progress.h"

using namespace std;

class Game{   
    public:
        void BeginEvent();
        //functions for each event
        void event1(Person person, Display dis);
        void event2(Person person, Display dis);
        void event3(Person person, Display dis);
        void event4(Person person, Display dis);
        void event5(Person person, Display dis);
        //function for what happens when a character dies
        void die(Display dis, int event);
};