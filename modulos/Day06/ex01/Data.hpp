/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:55 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/24 12:20:43 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data{
	int value;
	std::string test;
};

class Serializer {
    public:
        ~Serializer(void);
        Serializer(const Serializer&copy);
        Serializer& operator=(const Serializer&other);
        static uintptr_t 	serialize(Data* ptr);
		static  Data* deserialize(uintptr_t raw);
    private:
        Serializer(void);
};

#endif //CPP06_DATA_H
