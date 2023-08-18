/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:38:00 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/18 20:43:02 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Data.h"

int	main(void)
{
    Data yolo;
    yolo.value = 42;
    yolo.test = "yolo";
    yolo.SpookyPrint();

    uintptr_t   test;
    Data *d = new Data;

    std::cout << d << std::endl;
    std::cout << &d << std::endl;
    d->HelloWorld();

    uintptr_t dd = Serializer::serialize(d);
	uintptr_t oo = Serializer::serialize(NULL);
    std::cout << "_____________" << std::endl;
	std::cout << "real = " << dd <<  std::endl;
	std::cout << "ref = " << &dd <<  std::endl;
	std::cout << "null = " << oo <<  std::endl;
	std::cout << "ref = " << &oo <<  std::endl;

	Data* gone_oo = Serializer::deserialize(oo);
	Data* gone_dd = Serializer::deserialize(dd);
    std::cout << "_____________" << std::endl;
	std::cout << "value: " << gone_dd->value << std::endl;
    std::cout << "string" << gone_dd->test << std::endl;
	std::cout << "old: " << yolo.value << std::endl;
    std::cout << "old: " << yolo.test << std::endl;
	std::cout << "deserialize null " << gone_oo << std::endl;
    std::cout << "_____________" << std::endl;
    
    test = Serializer::serialize(d);
    std::cout << &d << std::endl;
    d->HelloWorld();
    d = Serializer::deserialize(test);
    std::cout << &d << std::endl;
    d->SpookyPrint();
	return (0);
}
