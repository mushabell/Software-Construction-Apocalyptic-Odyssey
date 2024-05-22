#pragma once

#include "../header/Person.h"
#include "../header/Game.h"
#include "../header/Progress.h"

using namespace std;

class Display {
    public:
        void eventPrompt(Person person, Events event);
        void options(Person person, Events event);
        void status(Person person);
        void death(Person person, Events event);
        void menu();
        void backstory(Person person);
};