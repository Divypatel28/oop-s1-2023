#include "Helicopter.h"

Helicopter::Helicopter() : name("Unknown") {}

Helicopter::Helicopter(int w, const std::string& n) : name(n) {
    if (w < 0) {
        w = 0;
    }

    set_weight(w);
}

const std::string& Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(const std::string& n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    float fuelConsumptionRate = 0.002f;

    if (headwind >= 40) {
        fuelConsumptionRate = 0.004f;
    }

    float newFuelPercentage = get_fuelPercentage() - fuelConsumptionRate * minutes;

    if (newFuelPercentage >= 0.2f) {
        set_fuelPercentage(newFuelPercentage);
        incrementNumberOfFlights();
    }
}
