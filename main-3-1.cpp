#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main(){
    House h;

    Fridge* f1 = new Fridge(137, 333.5);
    f1->turnOn();

    TV* t1 = new TV(89, 47.3);
    t1->turnOn();

    Fridge* f2 = new Fridge(222, 128.7);
    f2->turnOn();

    TV* t2 = new TV(301, 99.9);
    t2->turnOn();

    h.addAppliance(f1);
    h.addAppliance(t1);
    h.addAppliance(f2);
    h.addAppliance(t2);

    std::cout << "Total power consumption: " << h.getTotalPowerConsumption() << std::endl;

    return 0;
}