#include "Fixed.hpp"

#include <string>
#include <iostream>

const int Fixed::_bits = 8;

Fixed::Fixed() : _value(0){ 
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &copy){ 
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Fixed& Fixed::operator=(const Fixed &ref){ 
    std::cout << "Copy assignation operator called" << std::endl;
    if (this != &ref)
        this->_value = ref.getRawBits();
    return(*this);
}

int	Fixed::getRawBits(void) const{ 
    std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const new_value){ 
    std::cout << "setRawBits member function called" << std::endl;
	this->_value = new_value;
	return ;
}

Fixed::~Fixed(){ 
    std::cout << "Destructor called for value: " << _value << std::endl;
    return ;
}
