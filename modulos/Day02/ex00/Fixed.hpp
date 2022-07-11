#ifndef FIXED_HPP
# define FIXED_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	

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
