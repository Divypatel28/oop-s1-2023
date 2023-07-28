#include <iostream>

extern int num_count(int array[], int n, int number);
int main() {
  int array[5] = {2, 3, 2, 1, 3};
  int number = 2;
  int n = sizeof(array) / sizeof(array[0]);
  std::cout << "The number of elements that equal the number are: "<< num_count(array, n, number) << std::endl;
  return 0;
}