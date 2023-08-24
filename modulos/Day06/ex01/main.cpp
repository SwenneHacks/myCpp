/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:38:00 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/24 12:43:06 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Data.hpp"

int	main(void)
{
    Data original;
    original.value = 42;
    original.test = "original";
    std::cout << "Original value: " << original.value << std::endl;
    
    uintptr_t serialized = Serializer::serialize(&original);
    //serialized += 1;
    Data* deserialized = Serializer::deserialize(serialized);
    //original.value += 1;
    std::cout << "Deserialized value: " << deserialized->value << std::endl;
    
    if (deserialized == &original)
        std::cout << "Serialization and deserialization success." << RESET << std::endl;
    else
        std::cout << RED << "Serialization and deserialization failed." << RESET << std::endl;
    return 0;
}

