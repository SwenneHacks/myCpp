#include <Converter.hpp>

#include <string>
#include <iostream>

Converter::Converter(std::string input) : _input(input){}

Converter::Converter(const Converter& ref){
    *this = ref;
}

Converter&	Converter::operator=(const Converter& ref) {
    if (this != &ref)
		this->_input = ref._input;
	return *this;
}

Converter::~Converter() {}
