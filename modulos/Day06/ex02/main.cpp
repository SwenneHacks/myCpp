
#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Base.hpp"

int32_t	main(void)
{
    Base*   T = generate();
    //Base*   T = nullptr;
    identify(T);
    identify(*T);
    delete T;

    return (0);
}