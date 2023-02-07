#ifndef FIXED_HPP
# define FIXED_HPP

# define N				"\n"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	
# define RESET			"\033[0m"
# define YELLOW			"\x1b[33m"

class	Fixed
{
private:
		static const int	_bits; // fractional bits
		int					_value; // fixed point value
public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed& 		operator=(const Fixed& ref);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		~Fixed();

};

#endif
