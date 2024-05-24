#include "../header/Person.h"

//constructor for the person class
Person::Person(string name, string characterWeakness, string characterStrength){
    characterName = name;
    weakness = characterWeakness;
    strength = characterStrength;
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
string Person::getName() const{
    return (characterName);
}

//update the progress based on a a percentage scale
void Person::updateProgress(int level){
    gameProgressGauge = level *20;
}


//return the strength of the person
string Person::getStrength() const{
    return(strength);
}

//return the weakness of the person
string Person::getWeakness() const{
    return(weakness);
}

//return the status of the gun
bool Person::getGun() const{
    return(gun);
}

//return the status of the knife
bool Person::getKnife() const{
    return(knife);
}