#ifndef OPERATORS_HPP
# define OPERATORS_HPP

#include <iostream>
#include <string>

# define N				"\n"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	
# define RESET			"\033[0m\n"
# define YELLOW			"\x1b[33m"

class Operators
{
	private:
		static const int	_bits = 8;
		int					_fixed_point;

	public:
		Operators( void );
		~Operators( void );
	
		Operators( const Operators &copy );
		Operators( const int val );
		Operators( const float f );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
		int		toInt(void) const;
		float	toFloat(void) const;
		Operators	&operator=( const Operators &ref );

		bool	operator>( const Operators &A ) const;
		bool	operator<( const Operators &A ) const;
		bool	operator>=( const Operators &A ) const;
		bool	operator<=( const Operators &A ) const;
		bool	operator==( const Operators &A ) const;
		bool	operator!=( const Operators &A ) const;

		Operators	operator+( const Operators &A ) const;
		Operators	operator-( const Operators &A ) const;
		Operators	operator*( const Operators &A ) const;
		Operators	operator/( const Operators &A ) const;

		//EXTRA
		Operators	operator+=( const Operators &A );
		Operators	operator-=( const Operators &A );
		Operators	operator+=( int value );
		Operators	operator-=( int value );

		Operators	operator++( int );
		Operators	operator--( int );
		Operators	operator++( void );
		Operators	operator--( void );

		static Operators		&min( Operators &first, Operators &second );
		static Operators		&max( Operators &first, Operators &second );
		static const Operators	&min( const Operators &first, const Operators &second );
		static const Operators	&max( const Operators &first, const Operators &second );
};

std::ostream	&operator<<(std::ostream &out, Operators const &in);

#endif
