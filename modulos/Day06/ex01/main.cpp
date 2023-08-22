/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:38:00 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/22 19:41:37 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define RED "\e[0;31m"
#define RESET "\e[0m"

#include "Data.h"

int	main(void)
{
    Data original;
    original.value = 42;
    original.test = "original";
    original.SpookyPrint();
    std::cout << "Original value: " << original.value << std::endl;
    
    uintptr_t serialized = Serializer::serialize(&original);
    Data* deserialized = Serializer::deserialize(serialized);

    // Compare pointers,
    // if successful: access the deserialized object to verify its value
    if (deserialized == original) {
        std::cout << "Serialization and deserialization success." << std::endl;
    } 
    // else it failed
    // deserialized pointer then not equal to the original pointer
    else { std::cout << "Serialization and deserialization failed." << std::endl;}
    // delete deserialized;
    return 0;
}

