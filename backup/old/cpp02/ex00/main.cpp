/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 20:58:08 by sofferha      #+#    #+#                 */
/*   Updated: 2021/01/13 20:58:16 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}