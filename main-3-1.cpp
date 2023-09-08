#include <iostream>
#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

int main() {
    AirFleet airFleet;

    AirVehicle** fleet = airFleet.get_fleet();

    std::cout << "Air Fleet Contents:" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "The type of Airfleet " << i + 1 << ":" << std::endl;

        std::cout << "The weight of it is: " << fleet[i]->get_weight() << " kg" << std::endl;

        Airplane* airplane = dynamic_cast<Airplane*>(fleet[i]);

        if (airplane) {
            std::cout << "Type: Airplane" << std::endl;
            std::cout << "Passengers: " << airplane->get_numPassengers() << std::endl;
        } else {
            Helicopter* helicopter = dynamic_cast<Helicopter*>(fleet[i]);

            if (helicopter) {
                std::cout << "Type: Helicopter" << std::endl;
                std::cout << "Name: " << helicopter->get_name() << std::endl;
            } else {
                std::cout << "Type: AirVehicle" << std::endl;
            }
        }

        std::cout << "---------------" << std::endl;
    }

    return 0;
}
