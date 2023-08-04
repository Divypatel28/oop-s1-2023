#include <iostream>

using namespace std;

extern int sum_if_palindrome(int[],int);

int main(){
    int integers[] = {1,2,3,3,1};
    int output = sum_if_palindrome(integers,6);
    cout<<output<<endl;
}