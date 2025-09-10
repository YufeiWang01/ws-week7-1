#include "Appliance.h"

Appliance::Appliance() {
    powerRating = 0;
    isOn = false;
}
Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;
    isOn = false;
}

Appliance::~Appliance(){

}

int Appliance::getPowerRating(){
    return powerRating;
}

void Appliance::setPowerRating(int power){
    powerRating = power;
}

bool Appliance::getIsOn(){
    return isOn;
}

void Appliance::setIsOn(bool status){
    isOn = status;
}

void Appliance::turnOn(){
    isOn = true;
}

void Appliance::turnOff(){
    isOn = false;
}

double Appliance::getPowerConsumption(){
    return 0.0;
}