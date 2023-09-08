#include <iostream>
#include "AirVehicle.h"

int main() {
    
    AirVehicle plane1;


    AirVehicle plane2(500);


    plane1.get_weight(300);
    std::cout << "The weight of Vehicle 1 is " << plane1.get_weight() << " Kg" << std::endl;


    std::cout << "The fuel initally present in Vehicle 2 is " << plane2.get_fuel() << "%" << std::endl;

    plane2.refuel();
    std::cout << "Vehicle 2 is now refueled to the new refuel level: " << plane2.get_fuel() << "%" << std::endl;


    plane1.fly(20, 60);
    std::cout << "The number of flights for vehicle 1 " << plane1.get_numberOfFlights() << std::endl;

    return 0;
}
