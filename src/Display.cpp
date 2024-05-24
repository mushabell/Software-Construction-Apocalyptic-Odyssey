#include "../header/Display.h"
#include <string>
#include <iostream>

using namespace std;
    
void Display::eventPrompt(const string& statement) {
    cout << statement << endl;
}
void Display::options(const string& option1, const string& option2, const string& option3) {
    cout << option1 << endl;
    cout << option2 << endl;
    cout << option3 << endl;
    cout << endl;
}
void Display::options(const string& option1, const string& option2){
    cout << option1 << endl;
    cout << option2 << endl;
    cout << endl;
}
void Display::status(const string& statement) {
    cout << statement << endl;
    cout << endl;
}
void Display::death(const string& statement) {
    cout << statement << endl;
    cout << endl;
    cout << "End of game. Would you like to play again or quit?"<< endl;
    cout << "(Q) quit" << endl;
    cout << "(R) restart" << endl;
}
void Display::menu() {
    cout << 'It is currently 6:43pm on campus. There are 6 people in the classroom who are Dr.Brown, Cassidy, Jerome, Jessie, Ryan, and Greta. There had been an explosion in Dr.Heisenberg\'s lab and had caused a zombie apocalypse! You must make it off the campus to save your life! Jerome is the president of the MMA club. Greta loves to hack computer systems for fun. Cassidy is on academic probation and would lose her athletic scholarship if she does not do well in class. Ryan is very popular because he is good at manipulating people. Jessie loves to be a part of the track team and work with her geology professors. Who would you like to be: Ryan, Jessie, Dr.Brown, Cassidy, Jerome, or Greta?'<<endl;
    cout<<'Please type the name of the character you would like to be: ';
}
void Display::backstory(Person person) {
    if (person.getName() == "Greta" || person.getName() == "greta"){
        cout << "Hi Greta! Hope you are ready for some tough challenges. A character skill that you carry is your ability to pick locks. When you were a child, your parents would lock your favorite candy in the top cabinet with a lock. With a lot of practice, you were able to figure out how to pick the lock and can pick any lock that you want now! Now you and the people in your class must exit the campus together to survive."<< endl;
    } else if (person.getName() == "Jerome" || person.getName() == "jerome"){
        cout<< "Hi Jerome! Hope you are ready for some tough challenges. A character skill that you carry is your ability to knock people out with one punch. When you were a child, you were bullied a lot as a kid. Your parents signed you up for MMA classes to teach you self defense, and now you can really fight! Now you and the people in your class must exit the campus together to survive." << endl;
        cout << endl;
    } else if (person.getName() == "Cassidy" || person.getName() == "cassidy"){
        cout<< "Hi Cassidy! Hope you are ready for some tough challenges. A character skill that you carry is your strength! When you were a child, you would work in the ice cream parlor every summer to make some money and with every scoop that you scooped, you gained a lot of muscle. Now you can bench over 250lbs! Now you and the people in your class must exit the campus together to survive." << endl;
        cout << endl;
    } else if (person.getName() == "Dr.Brown" || person.getName() == "dr.brown" || person.getName() == "Dr.brown" || person.getName() == "dr.Brown"){
        cout<< "Hi Dr.Brown! Hope you are ready for some tough challenges. A character skill that you carry is your glasses! When you were a child, you would play with your glasses and the sun because you could start fires with the right angle and shine light in other people’s faces! However, you are a little bit out of practice since you have not played with your glasses since you became a professor. Now you and the people in your class must exit the campus together to survive." << endl;
        cout << endl;
    } else if (person.getName() == "Jessie" || person.getName() == "jessie"){
        cout<< "Hi Jessie! Hope you are ready for some tough challenges. A character skill that you carry is your speed! When you were a child, you did not have a lot of money growing up, so you would steal cans of soup from the supermarket and run back home to make sure that you were not caught by the guards. With your practice in running, you were able to become a track star and set the school record for fastest sprinter. Now you and the people in your class must exit the campus together to survive." << endl;
        cout << endl;
    } else if (person.getName() == "Ryan" || person.getName() == "ryan"){
        cout<< "Hi Ryan! Hope you are ready for some tough challenges. A character skill that you carry is your ability to manipulate people! When you were a child, your parents got divorced and got you a lot of gifts to make up for it. Eventually you learned to manipulate them to get any gift that you wanted. With this skill of manipulation, you became very popular in school and learned how to manipulate the people in school! Now you and the people in your class must exit the campus together to survive." << endl;
        cout << endl;
    }
}
void Display::error(const string& statement){
    cout << statement << endl;
    cout << endl;
}
void Display::finished(){
    cout<<"Congratulations! You made it out of the parking lot and you and your classmates made it out from the campus! You are officially saved from the zombie apocalypse! When you exited the campus, the military was able to figure out a cure for the zombie infection and was able to reverse the zombies back to humans!"<<endl;
}