#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

class Helicopter : public AirVehicle {
public:
    Helicopter();
    Helicopter(int w, const std::string& n);

    const std::string& get_name() const;
    void set_name(const std::string& n);
    void fly(int headwind, int minutes);

private:
    std::string name;
};

#endif
