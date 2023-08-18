/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:55 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/18 19:29:58 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_DATA_H
#define CPP06_DATA_H

#include <iostream>

struct Data{
	int value;
	std::string test;
    void HelloWorld(void);
    void SpookyPrint(void);
};

class Serializer {
    public:
        Serializer(void);
        ~Serializer(void);
        Serializer(const Serializer&copy);
        Serializer& operator=(const Serializer&other);

        static uintptr_t 	serialize(Data* ptr);
		static  Data* deserialize(uintptr_t raw);
};

#endif //CPP06_DATA_H
