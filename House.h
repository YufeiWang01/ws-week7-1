#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House{
private:
    Appliance** appliances;
    int count;
    int capacity;
public:
    House();
    ~House();
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
};
#endif