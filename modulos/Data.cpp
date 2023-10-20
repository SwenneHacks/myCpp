/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:50 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/24 12:30:27 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


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

Data* Serializer::deserialize(uintptr_t raw){
    Data* p = new Data;
    p = reinterpret_cast<Data*>(raw);
	return p;
}

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}


/**
 * 
 
 reinterpret_cast
 
    This operator is used to convert a pointer of one type to a pointer of another type, 
    or to convert an integer value to a pointer and vice versa.

    This type of casting should be used with caution, as it bypasses normal type checking.
    reinterpret_cast is the <most dangerous cast>, and should be used very sparingly. 
    
    It turns one type directly into another — such as casting the value from one pointer to another,
    or storing a pointer in an int, or all sorts of other nasty things. 

    Largely, the only guarantee you get with reinterpret_cast is that normally if 
    you cast the result back to the original type, <you will get the exact same value> 
    (but not if the intermediate type is smaller than the original type).

    It's used primarily for particularly weird conversions and bit manipulations, 
    like turning a raw data stream into actual data, or storing data in the low bits 
    of a pointer to aligned data.

uintptr_t:

    is an unsigned integer type provided by the <cstdint> header in C++. 
    It is guaranteed to be able to hold a pointer value.

    We use uintptr_t to store the serialized representation of the pointer, 
    as it ensures that the pointer value is preserved without any loss of information.

*/