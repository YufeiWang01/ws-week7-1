#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
private:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating);
    virtual ~Appliance();
    int getPowerRating();
    void setPowerRating(int power);
    bool getIsOn();
    void setIsOn(bool status);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};
#endif