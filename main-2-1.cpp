#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter helicopter(5690, "Sample Helicopter");

    int headwind = 45;
    int flightMinutes = 10;

    helicopter.fly(headwind, flightMinutes);

    std::cout << "The name of the Helicopter is " << helicopter.get_name() << std::endl;
    std::cout << "The weight is: " << helicopter.get_weight() << " kg" << std::endl;
    std::cout << "The fuel Percentage is " << helicopter.get_fuelPercentage() * 100 << "%" << std::endl;
    std::cout << "The number of flights is: " << helicopter.get_numberOfFlights() << std::endl;

    return 0;
}
