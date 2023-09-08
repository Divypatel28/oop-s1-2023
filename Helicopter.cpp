#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : weight(w), name(n), fuelPercentage(1.0f), numberOfFlights(0) {
    // Ensure the initial fuel percentage is valid (1.0 for 100%)
    if (fuelPercentage < 0.0f || fuelPercentage > 1.0f) {
        fuelPercentage = 1.0f;
    }
}

int Helicopter::get_weight() const {
    return weight;
}

std::string Helicopter::get_name() const {
    return name;
}

float Helicopter::get_fuelPercentage() const {
    return fuelPercentage;
}

int Helicopter::get_numberOfFlights() const {
    return numberOfFlights;
}

void Helicopter::set_weight(int w) {
    weight = w;
}

void Helicopter::set_name(std::string n) {
    name = n;
}

void Helicopter::set_fuelPercentage(float percentage) {
    if (percentage >= 0.0f && percentage <= 1.0f) {
        fuelPercentage = percentage;
    }
}

void Helicopter::set_numberOfFlights(int flights) {
    numberOfFlights = flights;
}

void Helicopter::fly(int headwind, int minutes) {
    // Calculate fuel consumption based on the given criteria
    float fuelConsumptionRate = 0.0018f; // 0.18% per minute

    if (headwind >= 40) {
        fuelConsumptionRate = 0.004f; // 0.4% per minute with strong headwind
    }

    float extraFuelConsumption = 0.0001f * (weight - 5670) * minutes;

    // Calculate the new fuel percentage
    fuelPercentage -= (fuelConsumptionRate + extraFuelConsumption) * minutes;

    // Ensure fuel percentage does not go below 0
    if (fuelPercentage < 0.0f) {
        fuelPercentage = 0.0f;
    }

    // Increment the number of flights
    numberOfFlights++;
}
