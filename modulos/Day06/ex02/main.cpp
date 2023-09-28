
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define RED "\e[0;31m"

#include "Base.hpp"


int32_t	main(void)
{
    srand(time(NULL));
    std::cout << GREEN << "__________ POINTERS" << std::endl;
    for (int i = 0; i < 10; i++){
        Base*   P = generate();
        identify(P);
        delete P;
    }
    std::cout << YELLOW << "__________ REFERENCE" << std::endl;
    for (int i = 0; i < 10; i++){
        Base*   P = generate();
        Base&   R = *P;
        identify(R);
        delete P;
    }
    std::cout << RED << "___________ ERRORS" << std::endl;
    Base*   N = nullptr;
    Base*   classD= new D();
    identify(N);
    identify(classD);
    delete classD;
    return (0);
}