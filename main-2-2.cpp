#include <iostream>
#include "TV.h"

int main(){
    TV tv1;
    tv1.setPowerRating(120);
    tv1.setScreenSize(55);
    tv1.turnOn();
    std::cout << "Power rating: " << tv1.getPowerRating() << std::endl;
    std::cout << "Screen size: " << tv1.getScreenSize() << std::endl;
    std::cout << "Power consumption: " << tv1.getPowerConsumption() << std::endl;
    TV tv2(150, 65);
    tv2.turnOn();
    std::cout << "Power rating: " << tv2.getPowerRating() << std::endl;
    std::cout << "Screen size: " << tv2.getScreenSize() << std::endl;
    std::cout << "Power consumption: " << tv2.getPowerConsumption() << std::endl;

    return 0;
}