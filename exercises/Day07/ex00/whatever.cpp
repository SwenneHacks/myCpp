/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 19:03:55 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/07 16:04:04 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
const T& min( T &a, T &b){
    return (a < b ? a : b);
}

template <typename T>
const T& max( T &a, T &b){
    return (a > b ? a : b);
}

template <typename T>
void swap( T &a, T &b){
    T   x;
    x = a;
    a = b;
    b = x;
}

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap( c, d );
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
return 0;
}
