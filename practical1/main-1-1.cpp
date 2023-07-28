#include <iostream>

extern int array_sum(int array[], int n);

int main(){
    int array[] = {1,2,3};
    std::cout<< "The sum is: "<< array_sum(array,2)<<std::endl;
}