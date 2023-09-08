#include <iostream>
#include "Airplane.cpp"

int main() {
    Airplane airplane;
    Airplane airplane2(10, 20);

    std::cout << "The fuel Percentage of Airplane is: " << airplane.getFuelPercentage() * 100 << "%" << std::endl;
    std::cout << "The number of Flights of Airplane is: " << airplane.getNumberOfFlights() << std::endl;

    airplane.fly(45, 0);
    std::cout << "The fuel percentage after 45 minute flight in the aircraft is " << airplane.getFuelPercentage() * 100 << "%" << std::endl;

    airplane.fly(30, 20);
    std::cout << "The fuel percentage after 30 minute flight with 20 wind is " << airplane.getFuelPercentage() * 100 << "%" << std::endl;
    

    return 0;
}

