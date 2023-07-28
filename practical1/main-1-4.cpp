#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  int array[5] = {10, 2, 3, 6, 5};
  int secondarray[5] = {3, 1, 0, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);

  std::cout << "Total of the 2 arrays is: "<< sum_two_arrays(array, secondarray, n) << std::endl;
  return 0;
}