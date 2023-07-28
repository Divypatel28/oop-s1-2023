#include <iomanip>
#include <iostream>

extern double array_mean(int array[], int n);

int main() {
  int array[5] = {3, 2, -1, -2, 7};
  int n = sizeof(array) / sizeof(array[0]);

  double mean = array_mean(array, n);

  std::cout << std::fixed << std::setprecision(1) << "Mean: " << mean
            << std::endl;
  return 0;
}
