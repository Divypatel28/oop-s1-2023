#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>

class Helicopter {
public:
    Helicopter(int w, std::string n);

    // Accessors
    int get_weight() const;
    std::string get_name() const;
    float get_fuelPercentage() const;
    int get_numberOfFlights() const;

    // Mutators
    void set_weight(int w);
    void set_name(std::string n);
    void set_fuelPercentage(float percentage);
    void set_numberOfFlights(int flights);

    void fly(int headwind, int minutes);

private:
    int weight; // in kilograms
    std::string name;
    float fuelPercentage; // Fuel percentage (e.g., 0.80 for 80%)
    int numberOfFlights;
};

#endif
