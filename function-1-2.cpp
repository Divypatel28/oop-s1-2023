#include "Person.h"

PersonList createPersonList(int n) {
    PersonList list;
    list.numPeople = n;
    list.ppl = new Person[n]; 
    for (int i = 0; i < n; ++i) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    return list;
}
