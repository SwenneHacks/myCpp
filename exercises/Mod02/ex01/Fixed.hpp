#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

public:

    Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const n);
	Fixed(float const n);
    ~Fixed(void);

	std::ostream& operator<<(std::ostream & out, Fixed const & in);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float 		toFloat( void ) const;
	int 		toInt( void ) const;

private:
	static const int	_fractional_bits;
	int					_fixed_point_value;

};

#endif
