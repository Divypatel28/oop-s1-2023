#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
public:
    AirVehicle();
    AirVehicle(int w);


    int get_weight() const;
    void get_weight(int w);


    float get_fuel() const;

    int get_numberOfFlights() const;


    void refuel();
    virtual void fly(int headwind, int minutes);

private:
    int weight;
    float fuel;
    int numberOfFlights;
};

#endif
