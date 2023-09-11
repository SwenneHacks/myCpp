
#include "Base.hpp"

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*   generate(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 2);

    switch (distr(gen) % 3)
    {
        case e_ClassA:
            std::cout << "Returning Class A" << std::endl;
            return (new A);

        case e_ClassB:
            std::cout << "Returning Class B" << std::endl;
            return (new B);

        case e_ClassC:
            std::cout << "Returning Class C" << std::endl;
            return (new C);
    }
    return (nullptr);
}

void identify(Base* p)
{
	A* ClassA = dynamic_cast<A*>(p);
	B* ClassB = dynamic_cast<B*>(p);
	C* ClassC = dynamic_cast<C*>(p);

    if (ClassA != nullptr)
        std::cout << "Im class A" << std::endl;
    else if (ClassB != nullptr)
        std::cout << "Im class B" << std::endl;
    else if (ClassC != nullptr)
        std::cout << "Im class C" << std::endl;
    else
		std::cout << "Dynamic cast failed" << std::endl;
	return ;
}

void identify(Base& p)
{
	try{
		A ClassA = dynamic_cast<A&>(p);
		std::cout << "Im class A" << std::endl;
	}
	catch(const std::bad_cast& e){}

	try{
		B ClassB = dynamic_cast<B&>(p);
		std::cout << "Im class B" << std::endl;
	}
	catch(const std::bad_cast& e){}

	try{
		C ClassC = dynamic_cast<C&>(p);
		std::cout << "Im class C" << std::endl;
	}
	catch (const std::bad_cast& e){}
}

Base::~Base(){}