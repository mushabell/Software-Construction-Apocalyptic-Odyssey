#pragma once

#include <string>
using namespace std;

class Progress {
    public:
        void progress(Person person, Events event); 
        void DisplayProgressHelper() const;
};
