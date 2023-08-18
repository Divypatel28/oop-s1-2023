#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople= pl.numPeoplepl;
    copy.people = new Person[pl.numPeople]; 

    for (int i = 0; i < pl.numPeople; ++i) {
        copy.people[i].name = pl.people[i].name;
        copy.people[i].age = pl.people[i].age;
    }

    return copy;
}



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