#ifndef PERSON_H

#define PERSON_H

#include <string>



struct Person {
    std::string name;
    int age;
};
struct PersonList {
    Person* ppl;
    int num_ppl;
};


#endif
