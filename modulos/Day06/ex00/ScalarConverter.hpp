#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream> // std

enum e_type {
	e_char = 0,
	e_int,
	e_float,
	e_double,
	e_impossible,
	e_nondisplayable
};

class	ScalarConverter
{
	public:
		static void CastInt(long double value, bool literals);
		static void CastChar(long double value, bool literals);
		static void CastDouble(long double value, int digits);
		static void CastFloat(long double value, int digits);
	
		static int FindType(std::string input);
		static int CheckDigits(std::string value);
		static bool CheckPseudos(std::string input);
		static bool CheckImpossible(std::string input);
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
