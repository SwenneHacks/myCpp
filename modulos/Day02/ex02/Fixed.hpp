#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>

class Fixed {
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &ref );
		Fixed( const int val );
		Fixed( const float val);
	
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed	&operator=( const Fixed &duplicate );

		bool	operator>( const Fixed &A ) const;
		bool	operator<( const Fixed &A ) const;
		bool	operator>=( const Fixed &A ) const;
		bool	operator<=( const Fixed &A ) const;
		bool	operator==( const Fixed &A ) const;
		bool	operator!=( const Fixed &A ) const;

		Fixed	operator+( const Fixed &A ) const;
		Fixed	operator-( const Fixed &A ) const;
		Fixed	operator*( const Fixed &A ) const;
		Fixed	operator/( const Fixed &A ) const;

		Fixed	operator++( int value );
		Fixed	operator--( int value );

		static Fixed		&min( Fixed &first, Fixed &second );
		static Fixed		&max( Fixed &first, Fixed &second );
		static const Fixed	&min( const Fixed &first, const Fixed &second );
		static const Fixed	&max( const Fixed &first, const Fixed &second );
	
	private:
		int					_fp;
		static const int	_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &ref);

#endif
