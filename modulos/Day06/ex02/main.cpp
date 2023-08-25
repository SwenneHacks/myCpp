
#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Base.hpp"

int32_t	main(void)
{
    Base*   Test = generate();

    identify_from_pointer(Test);
    identify_from_reference(*Test);

    delete Test;
    return (0);
}