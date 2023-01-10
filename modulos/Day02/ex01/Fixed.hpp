#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed 
{
	public:

		Fixed(void);
		Fixed(Fixed const &src);
		Fixed &operator=(const Fixed& ref);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed(void);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float 		toFloat( void ) const;
		int 		toInt( void ) const;

	private:
		static const int	_fractional_bits;
		int					_fixed_point_value;
};

std::ostream	& operator<<(std::ostream &out, Fixed const &in);

#endif
