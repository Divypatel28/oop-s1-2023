#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    
    int n;

    std::cout << "Please enter the number of people in list: ";
    std::cin >> n;

    PersonList personList = createPersonList(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i+1 << ": " << "Name:" << personList.ppl[i].name << ", Age:" << personList.ppl[i].age << std::endl;
    }

    delete[] personList.ppl;

    return 0;
}
