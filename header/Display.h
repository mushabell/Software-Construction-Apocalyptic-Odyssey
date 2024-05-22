#pragma once

#include "../header/Person.h"
#include "../header/Game.h"
#include "../header/Progress.h"

using namespace std;

class Display {
    public:
        void eventPrompt(string statement);
        void options(string statement);
        void status(string statement);
        void death(string statement);
        void menu();
        void backstory(Person person);
};