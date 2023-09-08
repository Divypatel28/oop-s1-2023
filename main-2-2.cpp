#include <iostream>
#include "Airplane.h"

int main() {
    Airplane airplane(10000, 150); // Example: 10,000 kg, 150 passengers

    int headwind = 65;
    int flightMinutes = 120;


    airplane.fly(headwind, flightMinutes);


    std::cout << "The weight of the Airplane is: " << airplane.get_weight() << " kg" << std::endl;
    std::cout << "The Number of Passengers aboard are: " << airplane.get_numPassengers() << std::endl;
    std::cout << "The Fuel Percentage of Airplane is: " << airplane.get_fuelPercentage() * 100 << "%" << std::endl;
    std::cout << "The number of flights: " << airplane.get_numberOfFlights() << std::endl;


    return 0;
}
