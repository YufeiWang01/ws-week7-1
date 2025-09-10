#include "House.h"

House::House(){
    capacity = 10;
    count = 0;
    appliances = new Appliance*[capacity];
    for (int i = 0; i < capacity; ++i) appliances[i] = 0;
}

House::~House() {
    for (int i = 0; i < count; ++i){
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance){
    if (count >= capacity) 
    return false;
    appliances[count++] = appliance;
    return true;
}

double House::getTotalPowerConsumption(){
    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        sum += appliances[i]->getPowerConsumption();
    }
    
    return sum;
}