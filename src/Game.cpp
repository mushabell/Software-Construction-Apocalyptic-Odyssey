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
   //all options listed in the correct order of index
   //0: (H) Hide in the building -- die
   //1: (J) Ask Jerome -- live
   //2: (Z) Use your skills against zombie -- live
   //3: (D) Dig a tunnel underground to get out -- live
   //4: (R) Ask Ryan to manipulate the zombies -- die
   //5: (M) Carry a mirror with you -- die
   //6: (W) Wait for the zombies -- die
   //7: (B) Ask Dr. Brown -- live
   vector<string> options{"(H) Hide in the building until there is only a little bit of zombies outside", "(J) Ask Jerome to go outside and use his MMA skills to fight the zombies", "(Z) Use your skills against the zombies", "(D) Dig a tunnel underground to get out of the building without getting attacked by zombies",
   "(R) Ask Ryan to manipulate the zombies into letting all of you go", "(M) Carry a mirror with you so every time a zombie comes near you, they only see their own reflection", "(W) Wait for the zombies to leave and then exit the building", "(B) Ask Dr. Brown to set a fire outside to distract the zombies"};
  
   string event2 = "Nice choice, you made it out of the janitor’s closet! You continue to walk towards the exit of the building. Right before you open the door you notice a bunch of zombies walking around the campus. What do you want to do: ";
    //display the prompt
    dis.eventPrompt(event2);
    char userChoice;
    //display the options
    if(person.getName() == "Greta"){
        dis.options(options.at(0), options.at(1), options.at(2));
    } else if(person.getName() == "Jerome"){
        dis.options(options.at(3), options.at(4), options.at(2));
    } else if(person.getName() == "Cassidy"){
        dis.options(options.at(2), options.at(5), options.at(3));
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(6), options.at(7), options.at(2));
    } else if(person.getName() == "Jessie"){
        dis.options(options.at(2), options.at(7), options.at(6));
    } else if(person.getName() == "Dr.Brown"){
        dis.options(options.at(6), options.at(2), options.at(4));
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
        if(userChoice == 'H' || userChoice == 'h'){
            die(person, 2);
        } else if(userChoice == 'J' || userChoice == 'j'){
            event3(person, dis);
        } else if(userChoice == 'Z' || userChoice == 'z'){
            event3(person, dis);
        } else if(userChoice == 'D' || userChoice == 'd'){
            event3(person, dis);
        } else if(userChoice == 'R' || userChoice == 'r'){
            die(person, 2);
        } else if(userChoice == 'M' || userChoice == 'm'){
            die(person, 2);
        } else if(userChoice == 'W' || userChoice == 'w'){
            die(person, 2);
        } else if(userChoice == 'B' || userChoice == 'b'){
            event3(person,dis);
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice;
        }
    }

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
