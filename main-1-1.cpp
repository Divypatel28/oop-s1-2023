#include <iostream>
#include "AirVehicle.h"

int main() {

  AirVehicle myAirVehicle(250);

  std::cout << "The weight is " << myAirVehicle.get_weight() << " kg" << std::endl;
  std::cout << "The fuel wass: " << myAirVehicle.get_fuel() << "%" << std::endl;
  std::cout << "number of flights: " << myAirVehicle.get_numberOfFlights() << std::endl;

  myAirVehicle.fly(20, 30);  // Flying plane for 30 minutes with a headwind 20 km/h

  std::cout << "The New updated Weight is " << myAirVehicle.get_weight() << " kg" << std::endl;
  std::cout << "The New the updated Fuel is " << myAirVehicle.get_fuel() << "%" << std::endl;
  std::cout << "The New the updated Number of Flights is "<< myAirVehicle.get_numberOfFlights() << std::endl;

  myAirVehicle.refuel();

  std::cout << "The weight After refuel is: " << myAirVehicle.get_weight() << " kg" << std::endl;
  std::cout << "The fuel level After refuel is: " << myAirVehicle.get_fuel() << "%" << std::endl;
  std::cout << "The nunmber of flights after refuel was: " << myAirVehicle.get_numberOfFlights() << std::endl;

  return 0;
}
