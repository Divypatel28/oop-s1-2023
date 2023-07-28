#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
  if (n < 1) {
    return 0;
  }
  int sum_arr1 = 0;
  int sum_arr2 = 0;
  int total_sum = 0;
  for (int i = 0; i < n; i++) {
    sum_arr1 += array[i];
    sum_arr2 += secondarray[i];
  }
  total_sum = sum_arr1 + sum_arr2;
  return total_sum;
}