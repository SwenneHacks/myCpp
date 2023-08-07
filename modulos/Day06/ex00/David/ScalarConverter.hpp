#ifndef SCALAR_HPP
#define SCALAR_HPP
#include <iostream>

enum enum_type {
	e_char = 0,
	e_float,
	e_int,
	e_double,
	e_impossible
};

class ScalarConverter {
	private:
		char 	_char;
		float	_float;
		int		_int;
		double	_double;
		static int		_type;
		ScalarConverter();
	public:	
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
		static int		getType(void );
		static void		findType(const std::string& input);
		static void		converter(const std::string& input);
		static void		convertint(const std::string& input);
		static void 	convertdouble(const std::string& input);
		static void		convertfloat(const std::string& input);
		static void		convertchar(const std::string& input);
			
};

#endif
