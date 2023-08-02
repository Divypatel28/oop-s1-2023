#include <iostream>
extern int sum_diagonal(int array[4][4]);
int main(){
int array[4][4]= {{1,2,3,4},{2,3,4,5},{3,4,5,6},{5,6,7,8}};
std:: cout<<"sum ="<<sum_diagonal(array)<<std:: endl;
return 0;
}

