#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter helicopter(5690, "Sample Helicopter");

    int headwind = 45;
    int flightMinutes = 10;

    helicopter.fly(headwind, flightMinutes);

    std::cout << "Helicopter Name: " << helicopter.get_name() << std::endl;
    std::cout << "Weight: " << helicopter.get_weight() << " kg" << std::endl;
    std::cout << "Fuel Percentage: " << helicopter.get_fuelPercentage() * 100 << "%" << std::endl;
    std::cout << "Number of Flights: " << helicopter.get_numberOfFlights() << std::endl;

    return 0;
}
