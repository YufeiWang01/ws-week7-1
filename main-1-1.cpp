#include <iostream>
#include "Appliance.h"

int main(){
    Appliance app(100);
    app.turnOn();

    std::cout << "Power rating: " << app.getPowerRating() << std::endl;
    std::cout << "Is on: " << app.getIsOn() << std::endl;
    std::cout << "Power consumption: " << app.getPowerConsumption() << std::endl;

    return 0;
}