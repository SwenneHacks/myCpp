#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream> // std

class	ScalarConverter
{
	public:
		static std::string CastInt(long double value, bool literals);
		static std::string CastChar(long double value, bool literals);
		static std::string CastDouble(long double value, int digits);
		static std::string CastFloat(long double value, int digits);

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
		return ("Non Displayable");
	}
};

class Impossible : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Impossible");
	}
};

#endif
