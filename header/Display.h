#pragma once

#include "../header/Person.h"
//#include "../header/Game.h"
//#include "../header/Progress.h"

using namespace std;

class Display {
    public:
        void eventPrompt(const string& statement);
        void options(const string& option1, const string& option2, const string& option3);
        void options(const string& option1, const string& option2);
        void status(const string& statement);
        void death(const string& statement);
        void menu();
        void backstory(Person person);
        void error(const string& statement);
        void finished();
};