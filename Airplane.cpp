#include "Airplane.h"

Airplane::Airplane() : numPassengers(0) {}

Airplane::Airplane(int w, int p) : numPassengers(p) { set_weight(w); }


int Airplane::get_numPassengers() const { return numPassengers; }



void Airplane::reducePassengers(int x) {
  if (x >= 0) {

    if (numPassengers >= x) {
      numPassengers -= x;

    } else {
      numPassengers = 0;
    }
  }
}


void Airplane::fly(int headwind, int minutes) {


  double rateOfFuelConsumption = 0.25;


  if (headwind >= 60) {
    rateOfFuelConsumption = 0.50;
  }


  int extraPassengerFuel = 0.1 * numPassengers * minutes;

  double consumptionFuel = (rateOfFuelConsumption + extraPassengerFuel) * minutes;


  if (get_fuel() >= 20) {

    if (get_fuel() - consumptionFuel < 20) {
      set_fuel(20);
      
    } else {
      set_fuel(get_fuel() - consumptionFuel);
    }

    set_numberOfFlights(get_numberOfFlights() + 1);
  }
}
