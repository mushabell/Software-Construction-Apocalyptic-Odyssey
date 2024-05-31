#include "../header/Person.h"
#include "../header/Weapon.h"
#include "../header/Knife.h"
#include "../header/Gun.h"
#include <iostream>
#include <vector>
using namespace std;

//constructor for the person class
Person::Person(string name, string characterWeakness, string characterStrength){
    characterName = name;
    weakness = characterWeakness;
    strength = characterStrength;
    gameProgressGauge = 0;
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

//addds a weapon to the vecotr 
void Person::addWeapon(string weaponType){
    if (weaponType == "knife"){
        Weapon knife("this is the story of the knife", "knife");
        weapons.push_back(knife);
    } else {
        Weapon gun("this is the story of the gun", "gun");
        weapons.push_back(gun);
    }
}

//checks to see if the weapon is there
bool Person::checkWeapon(string weaponType){
    for (int i = 0; i < weapons.size(); i++){
        if (weapons[i].getType() == weaponType){
            return true;
        }
    }
    return false;
}

//remove the weapon from the vector
void Person::removeWeapon(string weaponType){
    for (int i =0; i < weapons.size(); i++){
        if (weapons[i].getType() == weaponType){
            vector<Weapon>::iterator iterator;
            iterator = weapons.begin() + i;
            weapons.erase(iterator);
        }
    }
}