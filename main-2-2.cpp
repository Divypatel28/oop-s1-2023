#include <iostream>

#include "Airplane.h"

int main() {
  Airplane myAirplane(5000, 100);

  std::cout << "The starting weight is: " << myAirplane.get_weight() << " kg"<< std::endl;
  std::cout << "The starting fuel is: " << myAirplane.get_fuel() << "%" << std::endl;
  std::cout << "The starting no. of flights: " << myAirplane.get_numberOfFlights()<< std::endl;
  std::cout << "The starting no. of passengers: "<< myAirplane.get_numPassengers() << std::endl;

  // Fly the airplane for 30 minutes with a headwind of 40 km/h
  myAirplane.fly(40, 30);

  std::cout << "New the Updated Weight: " << myAirplane.get_weight() << " kg"<< std::endl;
  std::cout << "New the Updated Fuel: " << myAirplane.get_fuel() << "%" << std::endl;
  std::cout << "The new Updated number of flights is: " << myAirplane.get_numberOfFlights() << std::endl;
  std::cout << "New updated number of passengers id: "<< myAirplane.get_numPassengers() << std::endl;


  myAirplane.reducePassengers(20);

  std::cout << "The number of passengers after : "<< myAirplane.get_numPassengers() << std::endl;

  myAirplane.refuel();

  std::cout << "The weight after refuelling is: " << myAirplane.get_weight() << " kg"<< std::endl;
  std::cout << "Fuel level after refueling " << myAirplane.get_fuel() << "%"<< std::endl;
  std::cout << "The amount of flights after refuel are: " << myAirplane.get_numberOfFlights() << std::endl;

  return 0;
}
