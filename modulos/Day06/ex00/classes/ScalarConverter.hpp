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
