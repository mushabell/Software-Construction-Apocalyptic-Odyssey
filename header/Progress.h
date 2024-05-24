#pragma once

#include "Game.h"
#include "Person.h"

#include <string>
using namespace std;

class Progress {
    public:
        void updateGauge(Person person, Game g);
        void displayProgressHelper() const;
};
