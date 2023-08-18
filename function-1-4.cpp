#include "Person.h"



PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.num_people = pl.numPeople;
    copy.people = pl.people; 

    return copy;
}
PersonList createPersonList(int n) {
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n]; 

    for (int i = 0; i < n; ++i) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    return list;
}
