#include "Fixed.hpp"

#include <string>
#include <iostream>

Fixed::Fixed(){ std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){ std::cout << "Copy constructor called" << std::endl; 
	*this = copy;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; 
}

Fixed&	Fixed::operator=(const Fixed& ref){ std::cout << "Assignation (=) operator called" << std::endl; 
	return(*this); 
}

std::ostream	&operator<<(std::ostream &o, const Fixed &ref){	std::cout << "Ostream (<<) operator called" << std::endl; 
	o << ref.toFloat();
	return (o);
}

/* 
** COMPARISON
*/

bool Fixed::operator<(const Fixed& A) const { return (this->_fp < A._fp); }

bool Fixed::operator>(const Fixed& A) const { return (this->_fp > A._fp); }

bool Fixed::operator==(const Fixed& A) const { return (this->_fp == A._fp); }

bool Fixed::operator!=(const Fixed& A) const { return (this->_fp != A._fp); }

bool Fixed::operator>=(const Fixed& A) const { return (this->_fp >= A._fp); }

bool Fixed::operator<=(const Fixed& A) const { return (this->_fp <= A._fp); }

/*
** ARITHMETIC
*/

Fixed	Fixed::operator+(const Fixed& A) const { return (Fixed(toInt() + A.toInt())); }

Fixed	Fixed::operator-(const Fixed& A) const { return (Fixed(toInt() - A.toInt())); }

Fixed	Fixed::operator*(const Fixed& A) const { return (Fixed(toInt() * A.toInt())); }

Fixed	Fixed::operator/(const Fixed& A) const { return (Fixed(toInt() / A.toInt())); }

/* 
** INC/DEC-METRIC 
*/

Fixed	Fixed::operator++( int value ) 
{
	++(this->value);
	return (value);
}

Fixed	Fixed::operator--( int value ) 
{
	--(*this->value);
	return (value);
}

/* 
** MAX/MIN FUNCTIONS 
*/

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
