#include <iostream>

using namespace std;

bool is_palindrome(int integers[], int length){
    for(int i = 0; i<length; i++){
        if(integers[i]!=integers[length-1-i]){
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length){
    int output = 0;
    for(int i = 0; i<length; i++){
        output += integers[i];
    }
    return output;
}

int sum_if_palindrome(int integers[], int length){
    if(is_palindrome(integers,length)){
        return sum_array_elements(integers,length);
    }
    return -2;
}