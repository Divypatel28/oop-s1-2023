
#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main() {
    // Example matrix
    int matrix[4][4] = {
        {0, 1, 2, 0},
        {3, 4, 5, 6},
        {7, 8, 9, 9},
        {0, 1, 4, 5}
    };

    count_digits(matrix);
    return 0;
}