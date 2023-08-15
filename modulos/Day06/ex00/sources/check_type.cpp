#include "scalar_program.hpp"

bool checkPseudos(std::string input)
{
	if (std::string(input) == "-inff"
		|| std::string(input) == "+inff"
		|| std::string(input) == "nanf"
		|| std::string(input) == "nan"
		|| std::string(input) == "-inf"
		|| std::string(input) == "+inf")
			return true;
	else
		return false;
}

int checkDigits(std::string value)
{
	bool check_dot = false;
	int counter = 0;

	for (unsigned long i = 0; value.length() > i; i++)
	{
		if (isdigit(value[i]) == false && value[i] != '.')
			break ;
		while (!check_dot && value[i] != '.')
			i++;
		check_dot = true;
		counter++;
	}
	counter--;
	return (counter);
}

bool checkImpossible(std::string input)
{
	if (input.empty())
		return true;
	if (input.length() > 1)
	{
		if (input.find('.') == 1 || input.back() == 'f' ||
			input.front() == '+' || input.front() == '-')
				return false;
		if (std::isdigit(input[1]) == false)
		{
			if (checkPseudos(input) == true)
				return false;
			else
				return true;
		}
		for (int i = 1; i < checkDigits(input); i++)
		{
			if (std::isdigit(input[i]))
				continue;
			else
				return true;
		}
	}
	return false;
}

e_type findType(std::string input)
{
	if (checkImpossible(input) == true)
		return e_impossible;
	if (input.length() == 1)
	{
		if (std::isdigit(input[0]) == false)
			return e_char;
		else
			return e_int;
	}
	if (input.length() > 1)
	{
		if (checkPseudos(input) == true)
		{
			if (input.length() == 3)
				return e_double;
			if (input.length() == 5)
				return e_float;
			if (input.length() == 4){
				if (input.compare("nanf"))
					return e_float;
				else
					return e_double;
			}
		}
		if (input.front() == '+' || input.front() == '-')
			return e_signed;
		// for (int i = 1; i < checkDigits(input); i++)
		// {
		// 	if (std::isdigit(input[i]))
		// 		continue;
		// 	else
		// 		return e_impossible;
		// }
		if (input.find('.') == 1)
		{
			if (input.back() == 'f')
				return e_float;
			else
				return e_double;
		}
		if (stol(input) < INT_MAX)
			return e_int;
		if (input.length() > 11)
			return e_long;
	}
	return e_nondisplayable;
}