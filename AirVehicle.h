#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
public:
    AirVehicle();
    AirVehicle(int w);


    int set_weight() const;
    void set_weight(int w);


    float set_fuel() const;

    int set_numberOfFlights() const;


    void refuel();
    virtual void fly(int headwind, int minutes);

private:
    int weight;
    float fuel;
    int numberOfFlights;
};

#endif
