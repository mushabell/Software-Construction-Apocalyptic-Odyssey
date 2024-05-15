#include "../header/Person.h"

Person::Person(string CharacterName, string CharacterWeakness, string CharacterStrength){
    Character = CharacterName;
    weakness = CharacterWeakness;
    strength = CharacterStrength;
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