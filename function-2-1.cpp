#include <iostream>

using namespace std;

void print_binary_str(string decimal_number){
    int num = stoi(decimal_number);
    int count = 0;
    int size = log2(num);
    string output= "";
    for(int i = 0; i<size+1; i++){
        output = output + "0";
    }

    for(int i = size; i >= 0; i--){
        if(pow(2,i)<=num){
            num -= pow(2,i);
            output[size-i] = '1';
        }
    }
    cout<<output<<endl;
}