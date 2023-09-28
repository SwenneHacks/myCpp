/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:38:00 by swofferh      #+#    #+#                 */
/*   Updated: 2023/09/28 18:20:35 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define RED "\e[0;31m"
#define GREEN "\e[0;32m"

#include "Data.hpp"

int	main(void)
{
    Data original;
    original.value = 42;
    original.test = "original";
    std::cout << "Original: " << &original.value << std::endl;
    
    uintptr_t serialized = Serializer::serialize(&original);
    serialized += 1;
    Data* deserialized = Serializer::deserialize(serialized);
    original.value += 1;
    std::cout << "Deserialized: " << &deserialized->value << std::endl;
    
    if (deserialized == &original)
        std::cout << GREEN << "Serialization and deserialization success." << std::endl;
    else
        std::cout << RED << "Serialization and deserialization failed." << std::endl;
    return 0;
}

