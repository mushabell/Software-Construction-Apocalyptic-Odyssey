#pragma once

#include "Game.h"
#include "Person.h"

#include <string>
using namespace std;

class Progress {
    public:
        void updateGauge(Person person);
        void menu(Person person, Display dis);
        void info(Person person, Display dis);
};