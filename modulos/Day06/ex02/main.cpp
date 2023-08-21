
#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Base.h"

int32_t	main(void)
{
    Base*   Decoy = generate();

    identify_from_pointer(Decoy);
    identify_from_reference(*Decoy);

    delete Decoy;

//    system("leaks Convert");
    return (0);
}