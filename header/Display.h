#include "Person.h"
#include "Events.h"

class Display {
    public:
        void problem(Person person, Event event);
        void options(Person person, Event event);
        void status(Person person);
        void death(Person person, Event event);
        void menu();
        void backstory(Person person);
};