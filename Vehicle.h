#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
using namespace std;

class Vehicle {
protected:
    time_t TimeOfEntry;
    int ID;

public:
    Vehicle(int id);
    virtual int getParkingDuration() const = 0; 
    int getID() const;
};

#endif 