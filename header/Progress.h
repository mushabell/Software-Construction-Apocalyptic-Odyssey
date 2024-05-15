#pragma once

#include "Events.h"
#include "Person.h"

#include <string>
using namespace std;

class Progress {
    public:
        void updateGauge(Person person, Events event); 
        void DisplayProgressHelper() const;
};
