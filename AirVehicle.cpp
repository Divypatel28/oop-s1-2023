#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0), fuel(100), numberOfFlights(0) {}


AirVehicle::AirVehicle(int w) : weight(w), fuel(100), numberOfFlights(0) {}


int AirVehicle::get_weight() const { 
    return weight; 
    }


float AirVehicle::get_fuel() const { 
    return fuel;
    }


int AirVehicle::get_numberOfFlights() const { 
    return numberOfFlights; 
    }


void AirVehicle::set_weight(int w) { 
    weight = w; 
    }


void AirVehicle::set_fuel(float f) { 
    fuel = f; 
    }


void AirVehicle::set_numberOfFlights(int n) {
    numberOfFlights = n;
}


void AirVehicle::fly(int headwind, int minutes) {
  numberOfFlights++;

  float fuelConsumption = 0.1 * minutes + 0.01 * headwind;


  if (fuelConsumption <= fuel) {
    fuel -= fuelConsumption;
    
  } else {
    fuel = 0;
  }
}

void AirVehicle::refuel() { 
    fuel = 100;
    }
