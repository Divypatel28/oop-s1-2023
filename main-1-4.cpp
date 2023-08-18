#include <iostream>
#include "Person.h"


PersonList shallowCopyPersonList(PersonList pl);
PersonList createPersonList(int n);



int main() {
    int n;
    std::cout << "Please enter the number of people from original list: ";
    std::cin >> n;

    PersonList originalList = createPersonList(n);
    PersonList shallowCopiedList = shallowCopyPersonList(originalList);
    std::cout << "original list:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person" << i+1 << ":" << "Name:" << originalList.ppl[i].name << ", Age:" << originalList.ppl[i].age << std::endl;
    }
    std::cout << "Shallow Copied List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person" << i+1 << ":" << "Name:" << shallowCopiedList.ppl[i].name << ", Age:" << shallowCopiedList.ppl[i].age << std::endl;
    }
    return 0;
}
