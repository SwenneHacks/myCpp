#include "Fixed.hpp"

#include <cmath>        //roundf function
#include <string>
#include <iostream>

/*
** CANONICAL
*/

Fixed::Fixed(void) : _fixed_point(0) {}
Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed &copy) 
{ *this = copy; }

Fixed &Fixed::operator=(const Fixed &ref)
{ _fixed_point = ref._fixed_point;
	return(*this); }

std::ostream &operator<<(std::ostream &out, const Fixed &in) 
{ out << in.toFloat();
	return(out); }

/*
** GET & SET
*/

void Fixed::setRawBits(int const raw) { 
	this->_fixed_point = raw; }

int	Fixed::getRawBits(void) const { 
	return (this->_fixed_point); }

/*
** SHIFTERS
*/

Fixed::Fixed(int const val){ 
	_fixed_point = (val << _bits); 
}

int Fixed::toInt( void ) const { 
	return (_fixed_point >> _bits); 
}

Fixed::Fixed(float const f){ 
	_fixed_point = roundf(f * (1 << _bits)); 
}

float Fixed::toFloat( void ) const { 
	return (static_cast<float>(_fixed_point) / (1 << _bits)); 
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

/* 
** COMPARISON 
*/

bool Fixed::operator<(const Fixed &A) const { return (this->_fixed_point < A._fixed_point); }

bool Fixed::operator>(const Fixed &A) const { return (this->_fixed_point > A._fixed_point); }

bool Fixed::operator==(const Fixed &A) const { return (this->_fixed_point == A._fixed_point); }

bool Fixed::operator!=(const Fixed &A) const { return (this->_fixed_point != A._fixed_point); }

bool Fixed::operator>=(const Fixed &A) const { return (this->_fixed_point >= A._fixed_point); }

bool Fixed::operator<=(const Fixed &A) const { return (this->_fixed_point <= A._fixed_point); }


/*
** ARITHMETIC (temporary values)
*/

Fixed	Fixed::operator+(const Fixed &A) const { return (Fixed(toFloat() + A.toFloat())); }

Fixed	Fixed::operator-(const Fixed &A) const { return (Fixed(toFloat() - A.toFloat())); }

Fixed	Fixed::operator*(const Fixed &A) const { return (Fixed(toFloat() * A.toFloat())); }

Fixed	Fixed::operator/(const Fixed &A) const { return (Fixed(toFloat() / A.toFloat())); }

/* 
** DECREASE /INCREASE
*/

Fixed	Fixed::operator++( int ) 
{ 							//Pos
	Fixed a(*this); 
	++(*this);
	return (a); 
}

Fixed	Fixed::operator++( void ) 
{ 							//Pre
	this->_fixed_point++;
	return (*this); 
}

Fixed	Fixed::operator--( int ) 
{ 							//Post
	Fixed a(*this); 
	--(*this);
	return (a); 
}

Fixed	Fixed::operator--( void ) 
{ 							//Post
	this->_fixed_point--;
	return (*this); 
}

/* 
** EXTRAS (I added it because I want it) 
*/

Fixed 	Fixed::operator+=(int value) {
	(*this) = (*this) + value;
	return (*this);
}

Fixed 	Fixed::operator+=(const Fixed &A) { 
	Fixed a(*this);
	(*this) = a + A;
	return (a);
}

Fixed 	Fixed::operator-=(int value) {
	(*this) = (*this) - value;
	return (*this);
}


Fixed 	Fixed::operator-=(const Fixed &A) { 
	Fixed a(*this);
	(*this) = a - A;
	return (a);
}
