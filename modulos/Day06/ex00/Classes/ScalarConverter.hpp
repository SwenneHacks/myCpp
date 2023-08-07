#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream> // std

class	ScalarConverter
{
	public:
		static void CastInt(long double value, bool literals);
		static void CastChar(long double value, bool literals);
		static void CastDouble(long double value, int digits);
		static void CastFloat(long double value, int digits);
	
		static int CheckDigits(std::string value);
		static bool CheckLiterals(std::string input);
	
		ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter &ref);
		~ScalarConverter();
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
