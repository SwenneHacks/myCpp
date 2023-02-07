#include "Fixed.hpp"
#include <cmath>        //roundf function
#include <string>
#include <iostream>

const int Fixed::_fractional_bits = 8;

// Canonical form contructors + operators

Fixed::Fixed(void) : _fixed_point_value(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed &	Fixed::operator=(Fixed const &ref){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &ref)
		this->_fixed_point_value = ref.getRawBits();
	return (*this);
}

// Extra constructors (for multi-datatypes)

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_value = n * (1 << _fractional_bits);
	return ;
}

Fixed::Fixed(float const n){
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = roundf(n * (1 << _fractional_bits));
	return ;
}

// Getter and Setters called (for private values)

int	Fixed::getRawBits(void) const{
	return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw){
	this->_fixed_point_value = raw;
	return ;
}

// Member functions (for conversion / Bit-shifting)

float Fixed::toFloat( void ) const{ 
	return (static_cast<float>(_fixed_point_value) / (1 << _fractional_bits));
}

int Fixed::toInt( void ) const{
	return (_fixed_point_value / (1 << _fractional_bits));
}

// Ostream operator (for printing values with cout)

std::ostream &operator<<(std::ostream &out, Fixed const &in){
	out << in.toFloat();
	return (out);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}
