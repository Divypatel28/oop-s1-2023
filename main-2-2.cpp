#include<iostream>

using namespace std;

extern int binary_to_int(int[],int);

int main(){
    int binary_digits[] = {1,1,0,1,0,1,1,1,0,1,0,0};
    int output = binary_to_int(binary_digits,12);
    cout<<output<<endl;
}