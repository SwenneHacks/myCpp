#include <iostream>

class Base {
public:
    virtual ~Base();
};

Base::~Base(void)
{
    return ;
}

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void)
{
   int random = rand() % 3;
   Base* random_class;
   Base *array[3];
   array[0] = new A();
   array[1] = new B();
   array[2] = new C();

   for(int i = 0; i < 3; i++) {
       if (i == random) {
           random_class = array[i];
           std::cout << "Class number = " << random << std::endl;
       }
       else
           delete array[i];
   }
   return (random_class);
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p)) {
        std::cout << "identified type is A" << std::endl << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "identified type is B" << std::endl << std::endl;
    }
    else
        std::cout << "identified type is C" << std::endl << std::endl;
    delete p;
}

void identify_from_reference(Base & p)
{
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "identified type is A" << std::endl;
    }
    catch (std::bad_cast) {}
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "identified type is B" << std::endl;
    }
    catch (std::bad_cast) {}
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "identified type is C" << std::endl;
    }
    catch (std::bad_cast) {}
}

int main()
{
    srand(time(NULL));
    std::cout << "Class numbers -" << std::endl << "0 = A" << std::endl << "1 = B" << std::endl << "2 = C" << std::endl<< std::endl;
    identify_from_pointer(generate());

    Base* base = generate();
    identify_from_reference(*base);
    delete base;
    return 0;
}