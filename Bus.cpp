#include "Bus.h"

Bus::Bus(int id) : Vehicle(id){};

int Bus::getParkingDuration() const {

  std::time_t time = std::time(nullptr);
  int duration = static_cast<int>(time - TimeOfEntry);

  return static_cast<int>(duration * 0.75);  
}
