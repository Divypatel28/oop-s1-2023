#include <iostream>

double weighted_average(int array[], int n){
    if (n < 1) {
        return 0;
    }
    int curr = 0;
    double weighted_avg = 0;
    for(int i = 0; i<n; i++){
        int curr = array[i];
        int occur = 0;
        for(int j = 0; j<n; j++){
            if(array[j]==curr){
                occur++;
            }
        }
        weighted_avg = weighted_avg + (double(curr) * (double(occur)/n));
    }
    return weighted_avg;
}

int main(){
    int array[] = {1,2,2,4,1,3};
    std::cout<<weighted_average(array,6)<<std::endl;
}