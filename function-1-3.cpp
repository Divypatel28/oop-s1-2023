#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.num_ppl= pl.num_ppl;
    copy.ppl = new Person[pl.num_ppl]; 

    for (int i = 0; i < pl.num_ppl; ++i) {
        copy.ppl[i].name = pl.ppl[i].name;
        copy.ppl[i].age = pl.ppl[i].age;
    }

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