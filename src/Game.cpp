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
    //code here
}

//obstacles for event five
void Game::event5(Person person,Display dis){
    //all options listed in the correct order of index
    //0: (R): Ask Ryan -- die
    //1: (G): Use the gun/knife -- live
    //2: (Z): skills against zombies - live
    //3: (B): Ask Dr.Brown -- live
    //4: (J): Ask Jessie -- die
    //5: (D): Dig tunnel -- live
    //6: (F): Ask Jerome -- die
    vector<string> options{"(R) Ask Ryan to manipulate all the zombies into letting everyone go", "(G) Use the gun/knife against the zombies", "(Z) Use your skills against the zombies", "(B) Ask Dr.Brown to set a fire as a distraction", "(J) Ask Jessie to run really fast and get help", "(D) Dig a tunnel underground to get out of the parking lot", "(F) Ask Jerome to fight all the zombies to make it out of the parking lot"};
    string event5 = "Nice choice! You made it outside of the lab! All you have to do is make it through the parking lot with your classmates. You can see the exit within a few feet. You step one foot on the pavement and find that the zombies have set up camp in the parking lot. This is where the zombies live! You have no choice but to go through the parking lot! What do you want to do now: ";
    //display the prompt
    dis.eventPrompt(event5);
    char userChoice5;
    //display the options
    if(person.getName() == "Greta"){
        if (person.getGun() || person.getKnife()){
            dis.options(options.at(0), options.at(1), options.at(2));
        } else {
            dis.options(options.at(0), options.at(2));
        }
    } else if(person.getName() == "Jerome"){
        if (person.getGun() || person.getKnife()){
            dis.options(options.at(1), options.at(3), options.at(2));
        } else {
            dis.options(options.at(3), options.at(2));
        }
    } else if(person.getName() == "Cassidy"){
        if (person.getGun() || person.getKnife()){
            dis.options(options.at(3), options.at(1), options.at(4));
        } else {
            dis.options(options.at(3), options.at(4));
        }
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(5), options.at(3), options.at(2));
    } else if(person.getName() == "Jessie"){
        if (person.getGun() || person.getKnife()){
            dis.options(options.at(2), options.at(1), options.at(5));
        } else {
            dis.options(options.at(2), options.at(5));
        }
    } else if(person.getName() == "Dr.Brown"){
        if (person.getGun() || person.getKnife()){
            dis.options(options.at(1), options.at(2), options.at(6));
        } else {
            dis.options(options.at(2), options.at(6));
        }
    }
    //user input
    while (true){
        //checking to make sure than the input is a string
        if (cin >> userChoice5) break;
        dis.error("Please type a valid input. No numbers or symbols are allowed.");
        cin.ignore();
    }
    //evaluate the user input
    while (true){
        if(userChoice5 == 'R' || userChoice5 == 'r'){
            die(person, 5);
        } else if(userChoice5 == 'G' || userChoice5 == 'g'){
            dis.eventPrompt("Which weapon would you liek to use: ");
            if (person.getGun()){
                dis.status("(G) gun");
            }
            if (person.getKnife()){
                dis.status("(K) knife");
            }
            //user input
            while (true){
                //checking to make sure than the input is a string
                if (cin >> userChoice5) break;
                dis.error("Please type a valid input. No numbers or symbols are allowed.");
                cin.ignore();
            }
            //user input checking
            while (true){
                //checking to make sure than the input is a string
                if (userChoice5 == 'g' || userChoice5 == 'G' || userChoice5 == 'K' || userChoice5 == 'k') break;
                dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
                cin.ignore();
            }
            dis.finished();
        } else if(userChoice5 == 'Z' || userChoice5 == 'z'){
            dis.finished();
        } else if(userChoice5 == 'B' || userChoice5 == 'b'){
            dis.finished(); 
        } else if(userChoice5 == 'J' || userChoice5 == 'j'){
            die(person, 5);
        } else if(userChoice5 == 'D' || userChoice5 == 'd'){
            dis.finished();
        } else if(userChoice5 == 'F' || userChoice5 == 'f'){
            dis.finished();
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice5;
        }
    }
}

//function for what happens when a character dies
void Game::die(Person person, int event){
    if (event == 1){
        dis.
    }
}
