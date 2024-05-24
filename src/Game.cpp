#include "../header/Game.h"
#include "../header/Display.h"
#include <iostream>
#include <vector>
using namespace std;

//obstacles for event one
void Game::event1(Person person, Display dis){
    //all options listed in the correct order of index
    //0: (W): wait for zombies -- die
    //1: (S): supplies in closet -- live
    //2: (V): use the vents -- live
    //3: (J): ask Jerome -- die
    //4: (R): ask Ryan -- die
    //5: (C): ask Cassidy -- die
    //6: (Z): skills against zombie -- live
    vector<string> options{"(W) Wait for the zombies to leave and then exit the janitors closet", "(S) Use the supplies in the closet as a weapon against the zombies",
     "(V) Use the vents in the closet to get out", "(J) Ask Jerome to go out and knock out all the zombies", 
     "(R) Ask Ryan to go talk to the zombies and manipulate them into letting you all go", 
     "(C) Ask Cassidy to lift throw heavy buckets from the closest onto the zombies", "(Z) Use your skills against the zombies"};

    string event1 = "When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitors closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?";
    //display the prompt
    dis.eventPrompt(event1);
    char userChoice;
    //display the options
    if(person.getName() == "Greta"){
        dis.options(options.at(0), options.at(1), options.at(6));
    } else if(person.getName() == "Jerome"){
        dis.options(options.at(2), options.at(0), options.at(6));
    } else if(person.getName() == "Cassidy"){
        dis.options(options.at(6), options.at(0), options.at(3));
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(0), options.at(1), options.at(6));
    } else if(person.getName() == "Jessie"){
        dis.options(options.at(6), options.at(4), options.at(0));
    } else if(person.getName() == "Dr.Brown"){
        dis.options(options.at(0), options.at(6), options.at(5));
    }
    //user input
    while (true){
        //checking to make sure than the input is a string
        if (cin >> userChoice) break;
        dis.error("Please type a valid input. No numbers or symbols are allowed.");
        cin.ignore();
    }
    //evaluate the user input
    while (true){
        if(userChoice == 'W' || userChoice == 'w'){
            die(person, 1);
        } else if(userChoice == 'S' || userChoice == 's'){
            event2(person, dis);
        } else if(userChoice == 'V' || userChoice == 'v'){
            event2(person, dis);
        } else if(userChoice == 'J' || userChoice == 'j'){
            die(person, 1); 
        } else if(userChoice == 'R' || userChoice == 'r'){
            die(person, 1);
        } else if(userChoice == 'C' || userChoice == 'c'){
            die(person, 1);
        } else if(userChoice == 'Z' || userChoice == 'z'){
            event2(person, dis);
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice;
        }
    }
}

//obstacles for event two
void Game::event2(Person person, Display dis){
    //code here
}

//obstacles for event three
void Game::event3(Person person, Display dis){
    //code here
}

//obstacles for event four
void Game::event4(Person person, Display dis){
    /*
    0: (U) Use the gun/knife to kill the zombies - continue to 7 and 8
    1: (S) Ask Cassidy to throw science equipment at the zombies - die
    2: (R) Run away to the other side of the lab - die
    3: (M) Ask Ryan to manipulate the zombies - live
    4: (P) Create a poison in the lab to kill the zombies with - live
    5: (H) Act like a statue and hope the zombies will not see you - die
    6: (F) Set a fire to distract the zombies - live
    7: (G) Use a gun to kill the zombies - live
    8: (K) Use a knife to kill the zombies - live
    */
    vector <string> options{"(U) Use the gun/knife to kill the zombies", "(S) Ask Cassidy to throw science equipment at the zombies",
    "(R) Run away to the other side of the lab", "(M) Ask Ryan to manipulate the zombies", "(P) Create a poison in the lab to kill the zombies with",
    "(H) Act like a statue and hope the zombies will not see you", "(F) Set a fire to distract the zombies", "(G) Use a gun to kill the zombies", "(K) Use a knife to kill the zombies"};

    string event4 = "Nice choice, you made it out of the cafeteria! You only have to make it through the science lab and the parking lot to exit the campus. You walk by the science lab and notice a shortcut through the lab. You decide to take the shortcut and enter the lab. When you enter the lab you find a gun on the floor with three bullets. You pick it up for safety. As you are about to exit the lab, zombies come out from the corner of the lab! What do you want to do:";
    dis.eventPrompt(event4);
    char userchoice;
    person.updateGun(true);

    if(person.getName() == "Greta"){
        dis.options(options.at(0), options.at(1), options.at(2));
    } else if(person.getName() == "Jerome"){
        dis.options(options.at(2), options.at(3), options.at(0));
    } else if(person.getName() == "Cassidy"){
        dis.options(options.at(0), options.at(4), options.at(5));
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(4), options.at(0), options.at(2));
    } else if(person.getName() == "Jessie"){
        dis.options(options.at(0), options.at(2), options.at(5));
    } else if(person.getName() == "Dr.Brown"){
        dis.options(options.at(6), options.at(0), options.at(3));
    }
    while (true){
        //checking to make sure than the input is a string
        if (cin >> userchoice) break;
        dis.error("Please type a valid input. No numbers or symbols are allowed.");
        cin.ignore();
    }
    while (true){
        if(userchoice == 'U' || userchoice == 'u'){
            dis.options(options.at(7), options.at(8));
            if(userchoice == 'G' || userchoice == 'g'){
                person.updateGun(false);
                event5(person, dis);
            } else if(userchoice == 'K' || userchoice == 'k'){
                person.updateKnife(false);
                event5(person, dis);
            }
        } else if(userchoice == 'S' || userchoice == 's'){
            die(person, 4); 
        } else if(userchoice == 'R' || userchoice == 'r'){
            die(person, 4); 
        } else if(userchoice == 'M' || userchoice == 'm'){
            event5(person, dis);
        } else if(userchoice == 'P' || userchoice == 'p'){
            event5(person, dis);
        } else if(userchoice == 'H' || userchoice == 'h'){
            die(person, 1);
        } else if(userchoice == 'F' || userchoice == 'f'){
            event5(person, dis);
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userchoice;
        }
    }
}


//obstacles for event five
void Game::event5(Person person,Display dis){
    //code here
}

//function for what happens when a character dies
void Game::die(Person person, int event){
    //code here
}
