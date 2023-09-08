#include "Airplane.h"

Airplane::Airplane() : numPassengers(0) {
    setFuelPercentage(1.0f);
    setNumberOfFlights(0);
}

Airplane::Airplane(int w, int p) : numPassengers(p) {
    if (numPassengers < 0) {
        numPassengers = 0;
    }

    setFuelPercentage(1.0f);
    setNumberOfFlights(0);
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    if (x < 0) {
        x = 0;
    }

    if (numPassengers >= x) {
        numPassengers -= x;
    } else {
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes) {
    float fuelConsumptionRate = 0.0025f;

    if (headwind >= 60) {
        fuelConsumptionRate = 0.005f;
    }



    float extraFuelConsumption = 0.00001f * numPassengers * minutes;



    float newFuelPercentage = getFuelPercentage() - (fuelConsumptionRate + extraFuelConsumption) * minutes;


    if (newFuelPercentage >= 0.2f) {
        setFuelPercentage(newFuelPercentage);
        setNumberOfFlights (getNumberOfFlights() + 1);
    }
}
