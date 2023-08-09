#include "ScalarConverter.hpp"
#include <sstream>
#include <stdexcept>
#include <limits.h>
#include <string.h>
#include <limits>

// ScalarConverter::ScalarConverter(){
	// std::cout << "Contructed ScalarConverter"<< std::endl;
//}

// ScalarConverter::ScalarConverter( const ScalarConverter& other) {
// 	std::cout << "Copy constructor called ScalarConverter" << std::endl;
// 	*this = other;
// }

// ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
// 	std::cout << "Copy assignment called ScalarConverter" << std::endl;
//     if (this == &other)
//         return *this;
//     return *this;
// }

// ScalarConverter::~ScalarConverter(){
// 	// std::cout << "Decontructed ScalarConverter" << std::endl;
// }

/*
Once a std::istringstream object has been created, 
then the string can be streamed and stored using the extraction operator(>>). 
The extraction operator will read until whitespace is reached or until the stream fails.
*/
// void int
// 	i = input to int
// 	float(i) to int
// 	double (i)to int
// 	char(i) to int
// void  float
// 	i = to int
// 	to int (i)
// void double
// 	i = to int
// 	to int (i)
// void char
// 	i = to int
// 	to int (i)


void	ScalarConverter::converter(const std::string& input){
		findType(input);
		// const std::string array[] = {"char", "float", "int", "double", "impossible"};
		// void	(ScalarConverter::**forms[])(std::string))
		convertint(input);
		convertdouble(input);
		convertfloat(input);
		std::cout << std::endl;
}		
void	ScalarConverter::convertint(const std::string& input)
{
	std::istringstream readinput(input);
	int result = 0;
	try {
		if (!(readinput >> result)) 
        	throw std::invalid_argument("impossible");
		std::cout << "Int: " << result << std::endl;
	}
	catch (const std::exception& e) {
        std::cerr << "Int: " << e.what() << std::endl;
    }
}

void	ScalarConverter::convertdouble(const std::string& input)
{
	std::istringstream readinput(input);
	double result = 0;
	try {
		if (!(readinput >> result))
        	throw std::invalid_argument("impossible");
		std::cout << "Double: " << result << std::endl;
	}
	catch (const std::exception& e) {
        std::cerr << "Double: " << e.what() << std::endl;
    }
}

void	ScalarConverter::convertfloat(const std::string& input)
{
	std::istringstream readinput(input);
	float result = 0;
	try {
		if (!(readinput >> result))
        	throw std::invalid_argument("impossible");
		std::cout << "float: " << result << ".0f" << std::endl;
	}
	catch (const std::exception& e) {
        std::cerr << "float: " << e.what() << "f" << std::endl;
    }
}

/*
float f = std::numeric_limits<float>::infinity();
int a = std::numeric_limits<int>::infinity();
int b = std::numeric_limits<double>::infinity(); //negative infinity

std::string intStr7 = std::to_string(std::numeric_limits<int>::infinity());
std::string intStr8 = std::to_string(std::numeric_limits<int>::infinity() * -1);
*/
int ScalarConverter::_type = 0;

void	ScalarConverter::findType(const std::string& input)
{
	if (input.empty()){
		_type = e_impossible;
		return ;
	}
	if (!strcmp(input.c_str(), "inff") || !strcmp(input.c_str(), "nanf") || !strcmp(input.c_str(), "-inff") || !strcmp(input.c_str(), "+inff")){
		_type = e_float;
		return ;
	}
	else if (!strcmp(input.c_str(), "inf") || !strcmp(input.c_str(), "nan") || !strcmp(input.c_str(), "-inf") || !strcmp(input.c_str(), "+inf")){
		_type = e_double;
		return ;
	}
	else if (!input.empty() && (input[0] == '-' || input[0] == '+' || std::isdigit(input[0]) || input[0] == '.' )){
		int i = 0;
		int dotbool = 0;
		int fbool = 0;
		int deci = 0;
		if (input[0] == '-' || input[0] == '+')
			i++;
		while (input[i] != '\0'){
			if ((input[i]) == 'f'){
				if ( input[i + 1] == '\0')
					_type = e_float;
				fbool++;
			}
			else if ((input[i]) == '.'){
				_type = e_double;
				dotbool++;
			}
			else if (input[i] < '0' || input[i] > '9'){
				_type = e_char;
				return ;
			}
			if ((input[i]) >= '0' && (input[i]) <= '9' && dotbool == 1)
				deci++;
			i++;
		}
		int plus = 0;
		long double n1;
		if (input[0] == '-' && i > 9){
			if (input[0] == '+')
				plus++;
			n1 = atoi(input)
			if (n1 > INT_MAX && n1 )

		}
		if (fbool > 1 || dotbool > 1){
			_type = e_char;
			return ;
		}
		
		if (_type == e_double && deci < 8)
			_type = e_float;
		else if (_type == e_float && deci > 7)
			_type = e_double;
		else if (_type != e_double && _type != e_float)
			_type = e_int;
	}
	else {
		for (int i = 0; input[i] != '\0'; i++)
			if (input[i] > 127 && input[i] < 32){
				_type = e_impossible;
				return ;
			}
		_type = e_char;
	}
}

int		ScalarConverter::getType(void ){
	return (_type);
}