#include "Fixed.hpp"

#include <cmath>        //roundf function
#include <string>
#include <iostream>

Fixed::Fixed(void) : _fixed_point(0) {}
Fixed::~Fixed(void) {}

/*
** CANONICAL
*/

Fixed::Fixed(const Fixed &copy) 
{ *this = copy; }

Fixed &Fixed::operator=(const Fixed &ref)
{ return(*this); }

std::ostream &operator<<(std::ostream &out, const Fixed &in) 
{ return (out << in.toFloat()); }

/*
** CONVERTERS
*/

Fixed::Fixed(int const val) { _fixed_point = val * (1 << _fractional_bits); }
Fixed::Fixed(float const f){ _fixed_point = roundf(f * (1 << _fractional_bits)); }

/* 
** COMPARISON
*/

bool Fixed::operator<(const Fixed& A) const { return (this->_fixed_point < A._fixed_point); }

bool Fixed::operator>(const Fixed& A) const { return (this->_fixed_point > A._fixed_point); }

bool Fixed::operator==(const Fixed& A) const { return (this->_fixed_point == A._fixed_point); }

bool Fixed::operator!=(const Fixed& A) const { return (this->_fixed_point != A._fixed_point); }

bool Fixed::operator>=(const Fixed& A) const { return (this->_fixed_point >= A._fixed_point); }

bool Fixed::operator<=(const Fixed& A) const { return (this->_fixed_point <= A._fixed_point); }

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

Fixed	Fixed::operator++( int value ) {
	return (++value);
}

Fixed	Fixed::operator--( int value ) {
	return (--value);
}

/* 
** MAX/MIN FUNCTIONS 
*/

Fixed	&Fixed::min(Fixed &first, Fixed &second){
	if (first < second)
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second){
	if (first < second)
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second){
	if (first > second)
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second){
	if (first > second)
		return (first);
	return (second);
}
