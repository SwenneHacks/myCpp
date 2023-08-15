#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream> // std

class	ScalarConverter
{
	public:
		static void CastInt(long double value);
		static void CastChar(long double value);
		static void CastDouble(long double value, int digits);
		static void CastFloat(long double value, int digits);

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