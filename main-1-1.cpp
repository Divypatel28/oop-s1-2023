#include <iostream>
#include "AirVehicle.h"

int main() {
    // Create an AirVehicle object with default constructor
    AirVehicle vehicle1;

    // Create another AirVehicle object with a specified weight
    AirVehicle vehicle2(500);

    // Access and set attributes using getter and setter methods
    vehicle1.set_weight(300);
    std::cout << "The weight of Vehicle 1 is " << vehicle1.set_weight() << " Kg" << std::endl;

    // Get initial fuel level
    std::cout << "The fuel initally present in Vehicle 2 is " << vehicle2.set_fuel() << "%" << std::endl;

    // Refuel vehicle2
    vehicle2.refuel();
    std::cout << "Vehicle 2 is now refueled to the new refuel level: " << vehicle2.set_fuel() << "%" << std::endl;

    // Simulate a flight for vehicle1
    vehicle1.fly(20, 60);
    std::cout << "The number of flights for vehicle 1 " << vehicle1.set_numberOfFlights() << std::endl;

    return 0;
}
