// Counts the total number of even numbers and returns them
int count(int array[], int n) {
    int count_even = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            count_even++;
        }
    }
    return count_even;
}

