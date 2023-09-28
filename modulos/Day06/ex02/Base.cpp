
#include "Base.hpp"

Base*   generate(void)
{
    Base*	base;
    int     rand = std::rand() % 3;


	if (rand == 0) 
		base = new A();
	else if (rand == 1)
		base = new B();
	else if (rand == 2)
		base = new C();
    else
        return(nullptr);
	return (base); 
}

void identify(Base* p)
{
	if(p == nullptr)
        std::cout << "nullptr not possible" << std::endl;
    else 
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
    }
}

void identify(Base& p)
{
    try{
		A ClassA = dynamic_cast<A&>(p);
		std::cout << "Im class A" << std::endl;
	}
	catch(const std::bad_cast& e){
        std::cout << "NOT A" << std::endl;
        try{
            B ClassB = dynamic_cast<B&>(p);
            std::cout << "Im class B" << std::endl;
        }
        catch(const std::bad_cast& e){
            std::cout << "NOT B" << std::endl;
            try{
                C ClassC = dynamic_cast<C&>(p);
                std::cout << "Im class C" << std::endl;
                }
                catch (const std::bad_cast& e){ 
                    std::cout << "CASTING FAILED" << std::endl;
                    }
        }
    }
}

Base::~Base(){}