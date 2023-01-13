#include "Fixed.hpp"

#include <string>
#include <iostream>

Fixed::Fixed(){ 
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){ 
	std::cout << "Copy constructor called" << std::endl; *this = copy;
}

Fixed::~Fixed(){ 
	std::cout << "Destructor called" << std::endl; 
}

Fixed&	Fixed::operator=(const Fixed& ref){ 	
	std::cout << "Standard Assignation operator called" << std::endl; 
	return(*this); 
}

std::ostream	&operator<<(std::ostream &o, const Fixed &ref){	
	o << ref.toFloat();
	return (o);
}

/* COMPARISON OPERATORS */

bool Fixed::operator<(const Fixed& A) const{}

bool Fixed::operator>(const Fixed& A) const{}

bool Fixed::operator==(const Fixed& A) const{}

bool Fixed::operator!=(const Fixed& A) const{}

bool Fixed::operator>=(const Fixed& A) const{}

bool Fixed::operator<=(const Fixed& A) const{}

/* ARITHMETIC OPERATORS */

Fixed	Fixed::operator+(const Fixed& A) const{}

Fixed	Fixed::operator-(const Fixed& A) const{}

Fixed	Fixed::operator*(const Fixed& A) const{}

Fixed	Fixed::operator/(const Fixed& A) const{}

//* INC/DEC-METRIC OPERATORS */

Fixed	Fixed::operator++( int value ) 
{
	value++;
	return (value);
}

Fixed	Fixed::operator--( int value ) 
{
	value--;
	return (value);
}

/* MAX/MIN FUNCTIONS */

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}
