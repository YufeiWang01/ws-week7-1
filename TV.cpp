#include "TV.h"

TV::TV() : Appliance(){
    screenSize = 0.0;
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating){
    this->screenSize = screenSize;
}

void TV::setScreenSize(double screenSize){
    this->screenSize = screenSize;
}

double TV::getScreenSize(){
    return screenSize;
}

double TV::getPowerConsumption(){
    return getPowerRating() * 3 * (screenSize / 10.0);
}