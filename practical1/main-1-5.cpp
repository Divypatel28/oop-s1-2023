#include <iostream>

extern int count_evens(int number);

int main() {
  int number;
  int val;
  std::cout << "Please enter a number:\n";
  std::cin >> number;

  val = count_evens(number);
  std::cout << "The number is:" << val << std::endl;

  return 0;
}