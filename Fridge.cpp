#include "Fridge.h"

Fridge::Fridge() : Appliance(){
    volume = 0.0;
}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating){
    this->volume = volume;
}

void Fridge::setVolume(double volume){
    this->volume = volume;
}

double Fridge::getVolume(){
    return volume;
}

double Fridge::getPowerConsumption(){
    return getPowerRating() * 24 * (volume / 100.0);
}