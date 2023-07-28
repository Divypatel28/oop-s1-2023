#include <iostream>

int count_evens(int number) {
  if (number < 1) {
    return 0;
  }
  int count_ev = 0;
  for (int i = 1; i <= number; i++) {
    if (i % 2 == 0) { // testing for if i is even 
      count_ev++;
    }
  }
  return count_ev;
}