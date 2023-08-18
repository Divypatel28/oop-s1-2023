#include "Person.h"

PersonList createPersonList(int n) {
    PersonList list;
    list.numppl = n;
    list.ppl = new Person[n]; 
    for (int i = 0; i < n; ++i) {
        list.ppl[i].name = "Jane Doe";
        list.ppl[i].age = 1;
    }
    return list;
}
