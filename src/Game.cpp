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
    }
    //evaluate the user input
    if(userChoice == "W" || userChoice == "w"){
        //the path it leads to 
    } else if(userChoice == "S" || userChoice == "s"){
        //the path it leads to 
    } else if(userChoice == "V" || userChoice == "v"){
        //the path it leads to 
    } else if(userChoice == "J" || userChoice == "j"){
        //the path it leads to 
    } else if(userChoice == "R" || userChoice == "r"){
        //the path it leads to 
    } else if(userChoice == "C" || userChoice == "c"){
        //the path it leads to 
    } else if(userChoice == "Z" || userChoice == "z"){
        //the path it leads to 
    } else {
        //ask the user for a valid input
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
void Game::die(Person person, int event){
    //code here
}
