#include "../header/Person.h"

Person::Person(string characterName, string characterWeakness, string characterStrength){
    characterName = characterName;
    weakness = characterWeakness;
    strength = characterStrength;
    knife = false;
    gun = false;
    gameProgressGauge = 0;
}

void Person::updateGun(bool status){
    gun = status;
}

void Person::updateKnife(bool status){
    knife = status;
}

string Person::getName(){
    return (characterName);
}

void Person::updateProgress(int level){
    gameProgressGauge = level *20;
}

string Person::getStrength(){
    return(strength);
}

string Person::getWeakness(){
    return(weakness);
}