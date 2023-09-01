#include "Car.h"

Car::Car(int id) : Vehicle(id){};

int Car::getParkingDuration() const {
  std::time_t cTime = std::time(nullptr);
  int duration = static_cast<int>(cTime - TimeOfEntry);
  return static_cast<int>(duration * 0.9);  // Apply reduction
}
