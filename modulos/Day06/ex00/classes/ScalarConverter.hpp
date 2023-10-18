#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream> // std

class	ScalarConverter
{
	public:
		static int CastInt(std::string input);
		static char CastChar(std::string input);
		static float CastFloat(std::string input);
		static double CastDouble(std::string input);

	private:
		ScalarConverter();
		// ScalarConverter(std::string input);
		// ScalarConverter(const ScalarConverter &copy);
		// ScalarConverter& operator=(const ScalarConverter &ref);
		// ~ScalarConverter();
};

class NonDisplayable : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Non displayable");
	}
};

class Impossible : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("impossible");
	}
};

#endif

/**
 * @brief static CLASS
 * In C++, a static class is a class that can only have static members. 

Static members are members that belong to the class 
rather than to an instance of the class.

This means that they can be accessed without creating an instance of the class, 
and they are shared by all instances of the class. 

Static classes are often used for utility classes, 
such as mathematical functions or string manipulation functions, 
where it is not necessary to create an instance of the class to use the functions.
 */
# 

