#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include <vector>

int main() {
    std::vector<Vehicle*> vehicles;

    int numCars, numBuses, numMotor;
    std::cout << "Please enter a num of car: ";
    std::cin >> numCars;



    std::cout << "Please enter a num of bus: ";
    std::cin >> numBuses;



    std::cout << "Please enter a number of motorbike: ";
    std::cin >> numMotor;




    for (int i = 1; i <= numCars; ++i) {
        vehicles.push_back(new Car(i));
    }


    for (int i = 1; i < numBuses; ++i) {
        vehicles.push_back(new Bus(i));
    }


    for (int i = 1; i < numMotor; ++i) {
        vehicles.push_back(new Motorbike(i));
    }


    std::cout << "Parking duration is: \n"; 


    for (const Vehicle* vehicle: vehicles) {
        std::cout << "Vehicle ID is: " << vehicle->getID() << ", Parking Duration is : " << vehicle->getParkingDuration() << " sec" << std::endl;
    
        delete vehicle;
    }


    return 0;
}
