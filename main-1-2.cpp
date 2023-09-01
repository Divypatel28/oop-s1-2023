#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
using namespace std;

int main() {
  ParkingLot parkingLot(10);

  int choice;
  do {
    cout << "What vwhixcle type do you want to park here (1 - Car, 2 - Bus, 3 - "
            "Motorbike, 0 - Exit/Close): ";
    cin >> choice;

    if (choice == 1) {
      parkingLot.parkVehicle(new Car(parkingLot.getCount() + 1));

    } else if (choice == 2) {
      parkingLot.parkVehicle(new Bus(parkingLot.getCount() + 1));

    } else if (choice == 3) {
      parkingLot.parkVehicle(new Motorbike(parkingLot.getCount() + 1));
    }

  } while (choice != 0 && parkingLot.getCount() < parkingLot.getMaxCapacity());

  int unparked_vehicle_ID;
  cout << "What is ID of vehicle being unparked: ";
  cin >> unparked_vehicle_ID;
  parkingLot.unparkVehicle(unparked_vehicle_ID);

  return 0;
}