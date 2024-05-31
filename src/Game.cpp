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
            person.addToPath(options.at(0));
            die(dis, 1);
            return;
        } else if(userChoice == 'S' || userChoice == 's'){
            person.updateProgress();
            person.addToPath(options.at(1));
            event2(person, dis);
            return;
        } else if(userChoice == 'V' || userChoice == 'v'){
            person.updateProgress();  
            person.addToPath(options.at(2));
            event2(person, dis);
            return;
        } else if(userChoice == 'J' || userChoice == 'j'){
            person.addToPath(options.at(3));
            die(dis, 1); 
            return;
        } else if(userChoice == 'R' || userChoice == 'r'){
            person.addToPath(options.at(4));
            die(dis, 1);
            return;
        } else if(userChoice == 'C' || userChoice == 'c'){
            person.addToPath(options.at(5));
            die(dis, 1);
            return;
        } else if(userChoice == 'Z' || userChoice == 'z'){
            person.updateProgress();
            person.addToPath(options.at(6));
            event2(person, dis);
            return;
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
            person.addToPath(options.at(0));
            die(dis, 2);
            return;
        } else if(userChoice == 'J' || userChoice == 'j'){
            person.addToPath(options.at(1));
            person.updateProgress();
            event3(person, dis);
            return;
        } else if(userChoice == 'Z' || userChoice == 'z'){
            person.addToPath(options.at(2));
            person.updateProgress();
            event3(person, dis);
            return;
        } else if(userChoice == 'D' || userChoice == 'd'){
            person.addToPath(options.at(3));
            person.updateProgress();
            event3(person, dis);
            return;
        } else if(userChoice == 'R' || userChoice == 'r'){
            person.addToPath(options.at(4));
            die(dis, 2);
            return;
        } else if(userChoice == 'M' || userChoice == 'm'){
            person.addToPath(options.at(5));
            die(dis, 2);
            return;
        } else if(userChoice == 'W' || userChoice == 'w'){
            person.addToPath(options.at(6));
            die(dis, 2);
            return;
        } else if(userChoice == 'B' || userChoice == 'b'){
            person.updateProgress();
            person.addToPath(options.at(7));
            event3(person,dis);
            return;
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice;
        }
    }

}

//obstacles for event three
void Game::event3(Person person, Display dis){
    //all options listed in the correct order of index
    //0: (B) Use the butter in the cafeteria to make the door lock slippery -- die
    //1: (C): Ask Cassidy to break the door down -- live
    //2: (S): Use your skill against the door -- live
    //3: (K): Try to kick the door down -- live
    //4: (G): Ask Greta to open the door -- live
    //5: (Z): Wait for the zombies to come break the door -- die
    //6: (T): Dig a tunnel underground to get out of the cafeteria -- die
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
    person.addWeapon("knife");
    char userChoice;
    //display the options
    if(person.getName() == "Greta"){
        dis.options(options.at(0), options.at(1), options.at(2));
    } else if(person.getName() == "Jerome"){
        dis.options(options.at(3), options.at(4), options.at(2));
    } else if(person.getName() == "Cassidy"){
        dis.options(options.at(2), options.at(6), options.at(4));
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(5), options.at(4), options.at(2));
    } else if(person.getName() == "Jessie"){
        dis.options(options.at(2), options.at(4), options.at(6));
    } else if(person.getName() == "Dr.Brown"){
        dis.options(options.at(0), options.at(2), options.at(4));
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
            person.addToPath(options.at(0));
            die(dis, 3);
            return;
        } else if(userChoice == 'C' || userChoice == 'c'){
            person.updateProgress();
            person.addToPath(options.at(1));
            event4(person, dis);
            return;
        } else if(userChoice == 'S' || userChoice == 's'){
            person.updateProgress();
            person.addToPath(options.at(2));
            event4(person, dis);
            return;
        } else if(userChoice == 'K' || userChoice == 'k'){
            person.updateProgress();
            person.addToPath(options.at(3));
            event4(person, dis); 
            return;
        } else if(userChoice == 'G' || userChoice == 'g'){
            person.updateProgress();
            person.addToPath(options.at(4));
            event4(person, dis);
            return;
        } else if(userChoice == 'Z' || userChoice == 'z'){
            person.addToPath(options.at(5));
            die(dis, 3);
            return;
        } else if(userChoice == 'T' || userChoice == 't'){
            person.addToPath(options.at(6));
            die(dis, 3);
            return;
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice;
        }
    }
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
    person.addWeapon("gun");

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
                person.removeWeapon("gun");
                person.updateProgress();
                person.addToPath(options.at(7));
                event5(person, dis);
                return;
            } else if(userchoice == 'K' || userchoice == 'k'){
                person.removeWeapon("knife");
                person.updateProgress();
                person.addToPath(options.at(8));
                event5(person, dis);
                return;
            }
        } else if(userchoice == 'S' || userchoice == 's'){
            person.addToPath(options.at(1));
            die(dis, 4); 
            return;
        } else if(userchoice == 'R' || userchoice == 'r'){
            person.addToPath(options.at(2));
            die(dis, 4); 
            return;
        } else if(userchoice == 'M' || userchoice == 'm'){
            person.updateProgress();
            person.addToPath(options.at(3));
            event5(person, dis);
            return;
        } else if(userchoice == 'P' || userchoice == 'p'){
            person.updateProgress();
            person.addToPath(options.at(4));
            event5(person, dis);
            return;
        } else if(userchoice == 'H' || userchoice == 'h'){
            person.addToPath(options.at(5));
            die(dis, 4); 
            return;
        } else if(userchoice == 'F' || userchoice == 'f'){
            person.updateProgress();
            person.addToPath(options.at(6));
            event5(person, dis);
            return;
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userchoice;
        }
    }
}


//obstacles for event five
void Game::event5(Person person, Display dis){
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
        if (person.checkWeapon("gun") || person.checkWeapon("knife")){
            dis.options(options.at(0), options.at(1), options.at(2));
        } else {
            dis.options(options.at(0), options.at(2));
        }
    } else if(person.getName() == "Jerome"){
        if (person.checkWeapon("gun") || person.checkWeapon("knife")){
            dis.options(options.at(1), options.at(3), options.at(2));
        } else {
            dis.options(options.at(3), options.at(2));
        }
    } else if(person.getName() == "Cassidy"){
        if (person.checkWeapon("gun") || person.checkWeapon("knife")){
            dis.options(options.at(3), options.at(1), options.at(4));
        } else {
            dis.options(options.at(3), options.at(4));
        }
    } else if(person.getName() == "Ryan"){
        dis.options(options.at(5), options.at(3), options.at(2));
    } else if(person.getName() == "Jessie"){
        if (person.checkWeapon("gun") || person.checkWeapon("knife")){
            dis.options(options.at(2), options.at(1), options.at(5));
        } else {
            dis.options(options.at(2), options.at(5));
        }
    } else if(person.getName() == "Dr.Brown"){
        if (person.checkWeapon("gun") || person.checkWeapon("knife")){
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
            person.addToPath(options.at(0));
            die(dis, 5);
            return;
        } else if(userChoice5 == 'G' || userChoice5 == 'g'){
            dis.eventPrompt("Which weapon would you like to use: ");
            if (person.checkWeapon("gun")){
                dis.status("(G) gun");
            }
            if (person.checkWeapon("knife")){
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
            person.updateProgress();
            if (userChoice5 == 'g' || userChoice5 == 'G') {
                person.addToPath("(G) Use a gun to kill the zombies");
            }
            else {
                person.addToPath("(K) Use a knife to kill the zombies");
            }
            dis.finished();
            return;
        } else if(userChoice5 == 'Z' || userChoice5 == 'z'){
            person.updateProgress();
            dis.finished();
            return;
        } else if(userChoice5 == 'B' || userChoice5 == 'b'){
            person.updateProgress();
            dis.finished();
            return;
        } else if(userChoice5 == 'J' || userChoice5 == 'j'){
            die(dis, 5);
        } else if(userChoice5 == 'D' || userChoice5 == 'd'){
            person.updateProgress();
            dis.finished();
            return;
        } else if(userChoice5 == 'F' || userChoice5 == 'f'){
            person.updateProgress();
            die(dis, 5);
            return;
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> userChoice5;
        }
    }
}

//function for what happens when a character dies
void Game::die(Display dis, int event){
    if (event == 1){
        dis.death("You were unsuccessful. Your decision led the zombies into the janitor\'s closet and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!");    
    } else if (event == 2){
        dis.death("You were unsuccessful. Your decision led the zombies into the building and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!");
    } else if (event == 3){
        dis.death("You were unsuccessful. Your decision led the zombies into the cafeteria and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!");
    } else if (event == 4){
        dis.death("You were unsuccessful. Your decision led the zombies into the cafeteria and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!");
    } else if (event == 5){
        dis.death("You were unsuccessful. Your decision led the zombies to attack you from the parking lot. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!");
    }
}

//function to call all the events
void Game::BeginEvent(){
    Display dis;
    dis.menu();
    string name;
    //user input
    while (true){
        //checking to make sure than the input is a string
        if (cin >> name) break;
        dis.error("Please type a valid input. No numbers or symbols are allowed.");
        cin.ignore();
    }
    while (true){
        //checking to make sure that they put a valid name
        if (name == "Greta" || name == "greta"){
            Person Greta("Greta", "can not see without glasses", "good lock picker");
            dis.backstory(Greta);
            Greta.addToPath("Greta");
            event1(Greta, dis);
            return;
        } else if (name == "Jerome" || name == "jerome"){
            Person Jerome ("Jerome", "can only fight for 5 minutes", "MMA fighter");
            dis.backstory(Jerome);
            Jerome.addToPath("Jerome");
            event1(Jerome, dis);
            return;
        } else if (name == "Cassidy" || name == "cassidy"){
            Person Cassidy ("Cassidy", "has a bad attitude", "strength");
            dis.backstory(Cassidy);
            Cassidy.addToPath("Cassidy");
            event1(Cassidy, dis);
            return;
        } else if (name == "Dr.Brown" || name == "dr.brown" || name == "Dr.brown" || name == "dr.Brown"){
            Person DrBrown ("Dr.Brown", "can not run fast", "fire making glasses");
            dis.backstory(DrBrown);
            DrBrown.addToPath("Dr.Brown");
            event1(DrBrown, dis);
            return;
        } else if (name == "Jessie" || name == "jessie"){
            Person Jessie ("Jessie", "very clumsy", "fast runner");
            dis.backstory(Jessie);
            Jessie.addToPath("Jessie");
            event1(Jessie, dis);
            return;
        } else if (name == "Ryan" || name == "ryan"){
            Person Ryan ("Ryan", "arm is injured in a cast", "good manipulator");
            dis.backstory(Ryan);
            Ryan.addToPath("Ryan");
            event1(Ryan, dis);
            return;
        } else {
            dis.error("Invalid choice. Please type the letter of the choice you would like to choose. Type the letter that is in the parenthesis.");
            cin.ignore();
            cin >> name;
        }
    }
}
