#include "../header/Person.h"

//constructor for the person class
Person::Person(string characterName, string characterWeakness, string characterStrength){
    characterName = characterName;
    weakness = characterWeakness;
    strength = characterStrength;
    knife = false;
    gun = false;
    gameProgressGauge = 0;
}

//update the status of the gun
void Person::updateGun(bool status){
    gun = status;
}

//update the status of the knife
void Person::updateKnife(bool status){
    knife = status;
}

//return the chatacter's name 
string Person::getName(){
    return (characterName);
}

//update the progress based on a a percentage scale
void Person::updateProgress(int level){
    gameProgressGauge = level *20;
}


//return the strength of the person
string Person::getStrength(){
    return(strength);
}

//return the weakness of the person
string Person::getWeakness(){
    return(weakness);
}

//return the status of the gun
bool Person::getGun(){
    return(gun);
}

//return the status of the knife
bool Person::getKnife(){
    return(knife);
}