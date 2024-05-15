#include "Person.h"
#include "Events.h"

class Display {
    Public:
        void problem(person Person, event Event);
        void options(person Person, event Event);
        void status(person Person);
        void death(person Person, event Event);
        void menu();
        void backstory(person Person);
};