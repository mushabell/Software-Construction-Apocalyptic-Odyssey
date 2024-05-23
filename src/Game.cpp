#include "../header/Game.h"
#include "../header/Display.h"
#include <iostream>
#include <vector>
using namespace std;

//hello
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
    //all options listed in the correct order of index
    //0: (W): wait for zombies -- die
    //1: (S): supplies in closet -- live
    //2: (V): use the vents -- live
    //3: (J): ask Jerome -- die
    //4: (R): ask Ryan -- die
    //5: (C): ask Cassidy -- die
    //6: (Z): skills against zombie -- live
    vector<string> options{"(B) Use the butter in the cafeteria to make the door lock slippery", 
    "(C) Ask Cassidy to break the door down",
     "(S) Use your skill against the door", 
     "(K) Try to kick the door down", 
     "(G) Ask Greta to open the door", 
     "(Z) Wait for the zombies to come break the door", 
     "(T) Dig a tunnel underground to get out of the cafeteria"};

    string event3 = "Nice choice! You made it outside of the building! You decide to go through the cafeteria to choose the shortest path to get off the campus as fast as possible. When you enter the cafeteria you see that the building is empty. You and your classmates enter the main hall and the door closes behind you. You notice a knife on the floor and pick it up for protection. You walk across the hall and try to open the door behind you but you can not! What do you want to do now?";
    //display the prompt
    dis.eventPrompt(event3);
    person.updateKnife(true);
    char userChoice;
    //display the options
    if(person.getName() == "Greta"){
        dis.options(options.at(1), options.at(2), options.at(3));
    } else if(person.getName() == "Jerome"){
        dis.options(options.at(4), options.at(5), options.at(3));
    } else if(person.getName() == "Cassidy"){
        dis.options(options.at(3), options.at(7), options.at(5));
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(6), options.at(5), options.at(3));
    } else if(person.getName() == "Jessie"){
        dis.options(options.at(3), options.at(5), options.at(7));
    } else if(person.getName() == "Dr.Brown"){
        dis.options(options.at(1), options.at(3), options.at(5));
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
        if(userChoice == 'B' || userChoice == 'b'){
            die(person, 1);
        } else if(userChoice == 'C' || userChoice == 'c'){
            event4(person, dis);
        } else if(userChoice == 'S' || userChoice == 's'){
            event4(person, dis);
        } else if(userChoice == 'K' || userChoice == 'k'){
            event4(person, dis); 
        } else if(userChoice == 'G' || userChoice == 'g'){
            event4(person, dis);
        } else if(userChoice == 'Z' || userChoice == 'z'){
            die(person, 1);
        } else if(userChoice == 'T' || userChoice == 't'){
            die(person, 1);
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice;
        }
    }
}

//obstacles for event four
void Game::event4(Person person, Display dis){
    //code here
}

//obstacles for event five
void Game::event5(Person person,Display dis){
    //code here
}

//function for what happens when a character dies
void Game::die(Person person, int event){
    //code here
}
