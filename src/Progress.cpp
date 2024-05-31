#include "../header/Progress.h"
#include "../header/Game.h"
#include "../header/Person.h"
#include "../header/Display.h"


#include <string>
using namespace std;

void Progress::updateGauge(Person person) {
    //after each event, call updateGauge --for programmer
    person.updateProgress();
}

void Progress::info(Person person, Display dis){
    dis.outputinfo(person.getWeakness(), person.getStrength(), person.getName(), person.getPath());
}