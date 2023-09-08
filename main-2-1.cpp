#include <iostream>
#include "Helicopter.h"

int main() {
  Helicopter myHelicopter(4000, "Chopper A");

  std::cout << "The name of helicopter is " << myHelicopter.get_name() << std::endl;
  std::cout << "The weight ist: " << myHelicopter.get_weight() << " kg" << std::endl;
  std::cout << "The fuel is: " << myHelicopter.get_fuel() << "%" << std::endl;
  std::cout << "number of flights is: " << myHelicopter.get_numberOfFlights() << std::endl;


  myHelicopter.fly(20, 30); // Flying plane for 30 minutes with a headwind 20 km/h

  std::cout << "The new uppdated weight is" << myHelicopter.get_weight() << " kg" << std::endl;
  std::cout << "Th new updated fuel is " << myHelicopter.get_fuel() << "%" << std::endl;
  std::cout << "The new updated number of flights " << myHelicopter.get_numberOfFlights() << std::endl;

  myHelicopter.refuel();

  std::cout << "The weight after refuel is: " << myHelicopter.get_weight() << " kg" << std::endl;
  std::cout << "Fuel level after refuel: " << myHelicopter.get_fuel() << "%" << std::endl;
  std::cout << "The number of flights after refuel: " << myHelicopter.get_numberOfFlights() << std::endl;

  return 0;
}
