#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed& 		operator=(const Fixed& ref);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		~Fixed();

private:
		static const int	_fractional_bits;
		int					_fixed_point_value;
};

#endif
