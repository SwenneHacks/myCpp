//
// Created by Xander Voorvaart on 8/23/22.
//

#define RED "\e[0;31m"
#define RESET "\e[0m"

#include <iostream>
#include <iomanip>

class NonDisplayableException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Non Displayable");
	}
};

class ImpossibleException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Impossible");
	}
};

int32_t CountDecimals(std::string OriginalValue)
{
	bool CheckDot = false;
	int32_t AmountDecimals = 0;

	for (unsigned long i = 0; OriginalValue.length() > i; i++)
	{
		if (isdigit(OriginalValue[i]) == false && OriginalValue[i] != '.')
			break ;
		while (!CheckDot && OriginalValue[i] != '.')
			i++;
		CheckDot = true;
		AmountDecimals++;
	}
	AmountDecimals--;
	return (AmountDecimals);
}

// Conversions

void PrintChar(char *arg)
{
	try
	{
		long double OriginalValue = std::stol(arg);

		if (OriginalValue < 32 || OriginalValue > 126)
			throw (NonDisplayableException());
		std::cout << "'" << static_cast<char>(OriginalValue) << "'" << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		throw (ImpossibleException());
	}
}

void PrintInt(char *arg)
{
	try
	{
		if (std::string(arg) == "-inff"
			|| std::string(arg) == "+inff"
			|| std::string(arg) == "nanf"
			|| std::string(arg) == "nan"
			|| std::string(arg) == "-inf"
			|| std::string(arg) == "+inf")
			throw (ImpossibleException());

		int OriginalValue = std::stod(arg);
		
		if (std::stol(arg) > INT_MAX || std::stol(arg) < INT_MIN)
			throw (ImpossibleException());

		std::cout << static_cast<int>(OriginalValue) << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		throw (ImpossibleException());
	}
}

// Number shouldn't be higher than 7 digits. Otherwise the precision wont work.
void PrintFloat(char *arg)
{
    try
    {
        long double OriginalValue = std::stof(arg);
        int32_t AmountDecimals = CountDecimals(arg);

        std::cout << std::fixed << std::setprecision(AmountDecimals) 
		<< static_cast<float>(OriginalValue) << "f"
                << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        throw (ImpossibleException());
    }
}

void PrintDouble(char *arg)
{
    try
    {
        long double OriginalValue = std::stod(arg);
        int32_t AmountDecimals = CountDecimals(arg);

        std::cout << std::fixed << std::setprecision(AmountDecimals) << static_cast<double>(OriginalValue)
                << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        throw (ImpossibleException());
    }
}

int32_t	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);

	try
	{
		PrintChar(argv[1]);
	}
	catch (const NonDisplayableException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const ImpossibleException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Impossible" << std::endl;
	}

	try
	{
		PrintInt(argv[1]);
	}
	catch (const ImpossibleException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "Impossible" << std::endl;
	}

	try
	{
		PrintFloat(argv[1]);
	}
	catch (const NonDisplayableException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const ImpossibleException& e)
	{
		std::cout << e.what() << std::endl;
	}
    catch (const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }

	try
	{
		PrintDouble(argv[1]);
	}
	catch (const NonDisplayableException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const ImpossibleException& e)
	{
		std::cout << e.what() << std::endl;
	}
    catch (const std::exception& e)
    {
        std::cout << "Impossible" << std::endl;
    }
	return (0);
}