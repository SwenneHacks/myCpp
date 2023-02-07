#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

# define N				"\n"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	
# define RESET			"\033[0m\n"
# define YELLOW			"\x1b[33m"

class Fixed 
{
	private:
		static const int	_fractional_bits;
		int					_fixed_point_value;

	public:
		Fixed(void);
		~Fixed(void);
		//const values
		Fixed(int const n);
		Fixed(float const n);
		//canonical
		Fixed(Fixed const &copy);
		Fixed &operator=(const Fixed &ref);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float 		toFloat( void ) const;
		int 		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &in);

#endif
