
#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <random>

class Base {
public:
    virtual ~Base();
};

enum e_ClassNumbers {
    e_ClassA,
    e_ClassB,
    e_ClassC
};

void identify(Base* p);
void identify(Base& p);
Base* generate(void);


#endif //CPP06_BASE_H
