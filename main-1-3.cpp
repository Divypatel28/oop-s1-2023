#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);
PersonList deepCopyPersonList(PersonList pl);

int main() {
    int n;
    std::cout << "Please enter the number of people in the list: ";
    std::cin >> n;
    PersonList originalList = createPersonList(n);
    PersonList copiedList = deepCopyPersonList(originalList);
    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i+1 << ":" << "Name:" << originalList.ppl[i].name << ", Age:" << originalList.ppl[i].age << std::endl;
    }
    std::cout << "CopY List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i+1 << ": " << "Name:" << copiedList.ppl[i].name << ", Age:" << copiedList.ppl[i].age << std::endl;
    }
    delete[] originalList.ppl; 
    delete[] copiedList.ppl;   
    return 0;
}
