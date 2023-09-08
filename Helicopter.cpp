#include "Helicopter.h"

Helicopter::Helicopter() : name("") {}


Helicopter::Helicopter(int w, std::string n) : name(n) { 
    set_weight(w); 
    }


std::string Helicopter::get_name() const { 
    return name; 
    }


void Helicopter::fly(int headwind, int minutes) {

  double consumptionFuelRate = 0.18;


  if (headwind >= 40) {
    consumptionFuelRate = 0.4;
  }



  int additionalWeight = get_weight() - 5690;
  
  if (additionalWeight > 0) {
    consumptionFuelRate += 0.0001 * additionalWeight;
  }


  double consumptionFuel = consumptionFuelRate * minutes;

  if (get_fuel() >= 20) {
    
    if (get_fuel() - consumptionFuel < 20) {
      set_fuel(20);

    } else {
      set_fuel(get_fuel() - consumptionFuel);
    }

    set_numberOfFlights(get_numberOfFlights() + 1);
  }
}
