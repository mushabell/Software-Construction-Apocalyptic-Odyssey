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