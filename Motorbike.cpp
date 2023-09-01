#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}


int Motorbike::getParkingDuration() const {

  std::time_t time = std::time(nullptr);
  int duration = static_cast<int>(time - TimeOfEntry);

  return static_cast<int>(duration * 0.85);  
}