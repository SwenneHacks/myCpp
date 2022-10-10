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

		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed		&min( Fixed &first, Fixed &second );
		static Fixed		&max( Fixed &first, Fixed &second );
		static const Fixed	&min( const Fixed &first, const Fixed &second );
		static const Fixed	&max( const Fixed &first, const Fixed &second );

};


#endif
