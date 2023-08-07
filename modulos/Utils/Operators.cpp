#include "Operators.hpp"

#include <cmath>        //roundf function
#include <string>
#include <iostream>

/*
** CANONICAL
*/

Operators::Operators(void) : _fixed_point(0) {}
Operators::~Operators(void) {}

Operators::Operators(const Operators &copy) 
{ *this = copy; }

Operators &Operators::operator=(const Operators &ref)
{ _fixed_point = ref._fixed_point;
	return(*this); }

std::ostream &operator<<(std::ostream &out, const Operators &in) 
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

Operators::Operators(int const val){ 
	_fixed_point = (val << _bits); 
}

int Operators::toInt( void ) const { 
	return (_fixed_point >> _bits); 
}

Operators::Operators(float const f){ 
	_fixed_point = roundf(f * (1 << _bits)); 
}

float Operators::toFloat( void ) const { 
	return (static_cast<float>(_fixed_point) / (1 << _bits)); 
}

/* 
** MAX/MIN FUNCTIONS 
*/

Operators	&Operators::min(Operators &first, Operators &second){
	if (first < second)
		return (first);
	return (second);
}

const Operators	&Operators::min(const Operators &first, const Operators &second){
	if (first < second)
		return (first);
	return (second);
}

Operators	&Operators::max(Operators &first, Operators &second){
	if (first > second)
		return (first);
	return (second);
}

const Operators	&Operators::max(const Operators &first, const Operators &second){
	if (first > second)
		return (first);
	return (second);
}

/* 
** COMPARISON 
*/

bool Operators::operator<(const Operators &A) const { return (this->_fixed_point < A._fixed_point); }

bool Operators::operator>(const Operators &A) const { return (this->_fixed_point > A._fixed_point); }

bool Operators::operator==(const Operators &A) const { return (this->_fixed_point == A._fixed_point); }

bool Operators::operator!=(const Operators &A) const { return (this->_fixed_point != A._fixed_point); }

bool Operators::operator>=(const Operators &A) const { return (this->_fixed_point >= A._fixed_point); }

bool Operators::operator<=(const Operators &A) const { return (this->_fixed_point <= A._fixed_point); }


/*
** ARITHMETIC (temporary values)
*/

Operators	Operators::operator+(const Operators &A) const { return (Operators(toFloat() + A.toFloat())); }

Operators	Operators::operator-(const Operators &A) const { return (Operators(toFloat() - A.toFloat())); }

Operators	Operators::operator*(const Operators &A) const { return (Operators(toFloat() * A.toFloat())); }

Operators	Operators::operator/(const Operators &A) const { return (Operators(toFloat() / A.toFloat())); }

/* 
** DECREASE /INCREASE
*/

Operators	Operators::operator++( int ) 
{ 							//Pos
	Operators a(*this); 
	++(*this);
	return (a); 
}

Operators	Operators::operator++( void ) 
{ 							//Pre
	this->_fixed_point++;
	return (*this); 
}

Operators	Operators::operator--( int ) 
{ 							//Post
	Operators a(*this); 
	--(*this);
	return (a); 
}

Operators	Operators::operator--( void ) 
{ 							//Post
	this->_fixed_point--;
	return (*this); 
}

/* 
** EXTRAS (I added it because I want it) 
*/

Operators 	Operators::operator+=(int value) {
	(*this) = (*this) + value;
	return (*this);
}

Operators 	Operators::operator+=(const Operators &A) { 
	Operators a(*this);
	(*this) = a + A;
	return (a);
}

Operators 	Operators::operator-=(int value) {
	(*this) = (*this) - value;
	return (*this);
}

Operators 	Operators::operator-=(const Operators &A) { 
	Operators a(*this);
	(*this) = a - A;
	return (a);
}
