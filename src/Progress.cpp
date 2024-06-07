#include "../header/Progress.h"
#include "../header/Game.h"
#include "../header/Person.h"
#include "../header/Display.h"


#include <string>
using namespace std;

void Progress::menu(Person person, Display dis){
    string options = "This is the menu screen. What would you like to do:\n (I) Character Information\n (P) Game Progress \n (Q) Quit and return to game\n";
    dis.status(options);
    char userChoice;
    cin>> userChoice;
    while(true){
        if (userChoice == 'I' || userChoice == 'i'){
            info(person, dis);
            dis.status(options);
            cin.ignore();
            cin>> userChoice;
        } else if (userChoice == 'P' || userChoice == 'p'){
            dis.gameProgress(person);
            dis.status(options);
            cin.ignore();
            cin>> userChoice;
        } else if (userChoice == 'Q' || userChoice == 'q'){
            dis.status("What choice would you like to make for event listed above: ");
            return;
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice;
        }
    }
}

void Progress::info(Person person, Display dis){
    dis.outputinfo(person.getWeakness(), person.getStrength(), person.getName(), person.getPath());
}