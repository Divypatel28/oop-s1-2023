#include <iostream>
#include "Helicopter.cpp"

int main() {
    Helicopter heli;
    Helicopter heli2(15);
    Helicopter heli3(25);
    Helicopter heli4(30);
    std::cout << "The fuel is " << heli.getFuelPercentage() << "%" << std::endl;
    std::cout << "The Fuel after 45 minute of the flight with no wind: " << heli.getFuelPercentage() << "%" << std::endl;

    std::cout << "The fuel is " << heli2.getFuelPercentage() << "%" << std::endl;
    std::cout << "The fuel after 45 minute of the flight with no wind: " << heli2.getFuelPercentage() << "%" << std::endl;

    heli3.setFuelPercentage(20);
    std::cout << "The Fuel is " << heli3.getFuelPercentage() << "%" << std::endl;

    heli4.refuel();
    std::cout << "The new fuel level after a refuel is " << heli4.getFuelPercentage() << "%" << std::endl;

    return 0;
}
