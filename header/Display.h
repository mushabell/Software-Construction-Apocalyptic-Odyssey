#pragma once

#include "../header/Person.h"
//#include "../header/Game.h"
//#include "../header/Progress.h"

using namespace std;

class Display {
    public:
        void eventPrompt(const string& statement) const;
        void options(const string& option1, const string& option2, const string& option3) const;
        void options(const string& option1, const string& option2) const;
        void status(const string& statement) const;
        void death(const string& statement) const;
        void gameProgress(const Person& person) const;
        void menu() const;
        void backstory(const Person &person) const;
        void error(const string& statement) const;
        void finished() const;
};