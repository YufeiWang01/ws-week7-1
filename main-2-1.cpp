#include <iostream>
#include "Fridge.h"

int main() {
    Fridge f1;
    f1.setPowerRating(150);
    f1.setVolume(200);

    f1.turnOn();

    std::cout << "Power rating: " << f1.getPowerRating() << std::endl;
    std::cout << "Volume: " << f1.getVolume() << " L" << std::endl;
    std::cout << "Power consumption: " << f1.getPowerConsumption() << std::endl;

    Fridge f2(100, 300);
    std::cout << "\nPower rating: " << f2.getPowerRating() << std::endl;
    std::cout << "Volume: " << f2.getVolume() << " L" << std::endl;
    std::cout << "Power consumption: " << f2.getPowerConsumption() << std::endl;

    return 0;
}