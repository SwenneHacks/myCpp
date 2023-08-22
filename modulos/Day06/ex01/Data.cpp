/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:50 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/22 19:35:59 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

// Struct

void Data::HelloWorld(void) {
    std::cout << "Hello World" << std::endl;
    return ;
}

void Data::SpookyPrint(void) {
    std::cout << Data::value << std::endl;
    return ;
}

// Serializer

Serializer::Serializer(void){
    return ;
}

Serializer::Serializer(const Serializer&copy) {
    *this = copy;
    return ;
}

Serializer& Serializer::operator=(const Serializer&other) {
    (void)other;
    return (*this);
}

Serializer::~Serializer(void) {
    return ;
}

// Static Members

Data* Serializer::deserialize(uintptr_t raw){
    struct Data* p = new Data;
    p = reinterpret_cast<Data*>(raw);
	return p;
}

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}
