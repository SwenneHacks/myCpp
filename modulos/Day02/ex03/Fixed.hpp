#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>

# define N				"\n"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	
# define RESET			"\033[0m\n"
# define YELLOW			"\x1b[33m"

class Fixed 
{
	private:
		static const int	_bits = 8;
		int					_fixed_point;

	public:
		Fixed( void );
		~Fixed( void );
	
		Fixed( const Fixed &copy );
		Fixed( const int val );
		Fixed( const float f );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed	&operator=( const Fixed &ref );

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

		//EXTRA
		Fixed	operator+=( const Fixed &A );
		Fixed	operator-=( const Fixed &A );
		Fixed	operator+=( int value );
		Fixed	operator-=( int value );

		Fixed	operator++( int );
		Fixed	operator--( int );
		Fixed	operator++( void );
		Fixed	operator--( void );

		static Fixed		&min( Fixed &first, Fixed &second );
		static Fixed		&max( Fixed &first, Fixed &second );
		static const Fixed	&min( const Fixed &first, const Fixed &second );
		static const Fixed	&max( const Fixed &first, const Fixed &second );
};

std::ostream	&operator<<(std::ostream &out, Fixed const &in);

#endif
