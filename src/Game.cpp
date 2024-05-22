#include "../header/Game.h"
#include <iostream>
#include <vector>
using namespace std;

//obstacles for event one
void Game::event1(Person person, Display display){
    vector<string> options{"(W) Wait for the zombies to leave and then exit the janitors closet", "(S) Use the supplies in the closet as a weapon against the zombies",
     "(V) Use the vents in the closet to get out", "(J) Ask Jerome to go out and knock out all the zombies", 
     "(R) Ask Ryan to go talk to the zombies and manipulate them into letting you all go", 
     "(C) Ask Cassidy to lift throw heavy buckets from the closest onto the zombies", "(Z) Use your skills against the zombies";}

    cout << "When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner.
    You notice that you are backed against the janitors closet. You enter the closest with all your classmates to hide from the zombies.
    What do you want to do now?";
    char option;
    if(person.getName() == "Greta"){
        display.options(options.at(0));
        display.options(options.at(0));
        cout << options.at(2) << endl;
        cout << "Choose an option: ";
        cin >> option;
        cout << endl;
    }
}

//obstacles for event two
void Game::event2(Person person, Display display){
    //code here
}

//obstacles for event three
void Game::event3(Person person, Display display){
    //code here
}

//obstacles for event four
void Game::event4(Person person, Display display){
    //code here
}

//obstacles for event five
void Game::event5(Person person,Display display){
    //code here
}

//function for what happens when a character dies
void Game::death(Person person, int event){
    //code here
}