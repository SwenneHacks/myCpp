
#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <random>

class Base {
public:
    virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
class D : public Base {};

void identify(Base* p);
void identify(Base& p);
Base* generate(void);


#endif //CPP06_BASE_H
