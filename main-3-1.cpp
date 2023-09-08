#include <iostream>

#include "AirFleet.h"

int main() {
  AirFleet fleetObject;

  AirVehicle** fleet = fleetObject.get_fleet();

  for (int i = 0; i < 5; ++i) {
    AirVehicle* airvehicle = fleet[i];
    std::cout << "AirVehcile " << i + 1 << ": the weight is: " << airvehicle-> get_weight() << std::endl;
  }

  for (int i = 0; i < 5; ++i) {
    delete fleet[i];
  }

  return 0;
}
