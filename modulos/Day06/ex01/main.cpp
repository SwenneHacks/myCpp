/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:38:00 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/04 16:38:01 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Data.h"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int32_t	main(void)
{
    uintptr_t   test;
    Data*   d = new Data;

    std::cout << &d << std::endl;
    d->HelloWorld();
    test = serialize(d);
    d = deserialize(test);
    std::cout << &d << std::endl;
    d->HelloWorld();
	return (0);
}