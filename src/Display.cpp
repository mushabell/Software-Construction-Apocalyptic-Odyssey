#include "../header/Display.h"
#include <string>
#include <iostream>
using namespace std;
    
void Display::eventPrompt(const string& statement) {
    // Print out the event prompt. Use options
}
void Display::options(const string& option1, const string& option2, const string& option3) {
    // Print options per event
}
void Display::options(const string& option1, const string& option2){
    //Print options per event
}
void Display::status(const string& statement) {
    // Print strength wekness and weapons
}
void Display::death(const string& statement) {
    // Print death option result and update game with death
}
void Display::menu() {
    // Print menu
}
void Display::backstory(Person person) {
    // Print backstory
}
void Display::error(const string& statement){
    //print the error message
}
void Display::finished(){
    cout<<"Congratulations! You made it out of the parking lot and you and your classmates made it out from the campus! You are officially saved from the zombie apocalypse! When you exited the campus, the military was able to figure out a cure for the zombie infection and was able to reverse the zombies back to humans!"<<endl;
}