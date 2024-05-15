#include "../header/Person.h"

Person(string CharacterName, string CharacterWeakness, string CharacterStrength){
    Character = CharacterName;
    weakness = CharacterWeakness;
    strength = CharacterStrength;
    knife = false;
    gun = false;
    gameProgressGauge = 0;
}

void updateGun(bool status){
    gun = status;
}

void updateKnife(bool status){
    knife = status;
}