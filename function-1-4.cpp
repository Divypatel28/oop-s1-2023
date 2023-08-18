#include "Person.h"



PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.num_ppl = pl.num_ppl;
    copy.ppl = pl.ppl; 

    return copy;
}
PersonList createPersonList(int n) {
    PersonList list;
    list.num_ppl = n;
    list.ppl = new Person[n]; 

    for (int i = 0; i < n; ++i) {
        list.ppl[i].name = "Jane Doe";
        list.ppl[i].age = 1;
    }
    return list;
}
