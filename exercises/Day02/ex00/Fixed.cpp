#include "Fixed.hpp"

#include <string>
#include <iostream>

const int Fixed::_fractional_bits = 8;

Fixed::Fixed() : _fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
    std::cout << "Copy assignation operator called" << std::endl;
    if (this != &ref)
        this->_fixed_point_value = ref.getRawBits();
    return(*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
	return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
