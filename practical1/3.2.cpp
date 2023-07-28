#include <iostream>

int median_array(int array[], int n){
    if (n < 1) {
        return 0;
    }
    int sorted_array[n];
    int pos = 0;
    for (int i = 0; i<n; i++){
        int min = INT_MAX;
        for(int j = 0; j<n; j++){
            if(array[j]<min){
                pos = j;
                min = array[j];
            }
        }
        array[pos]=INT_MAX;
        sorted_array[i]=min;
    }

    if(n%2==0){
        return (sorted_array[n/2]+sorted_array[n/2-1])/2;
    }
    return sorted_array[n/2];

}

int main(){
    int array[]={3,5,2,1,4};
    std::cout<<median_array(array,5)<<std::endl;
}