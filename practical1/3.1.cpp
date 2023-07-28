#include <iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(array[start]!=array[end]){
            return false;
        }
        if (start>0){
            if(array[start]<array[start-1]){
                return false;
            }
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    int array[] = {1,4,2,1};
    std::cout<<is_fanarray(array,5)<<std::endl;
}