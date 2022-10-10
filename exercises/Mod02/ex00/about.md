
_______________________________
Exercise : 00
My First Canonical Class


Turn-in directory : ex00/
Files to turn in : Fixed.class.hpp and Fixed.class.cpp, or Fixed.hpp and
Fixed.cpp, or Fixed.h and Fixed.cc.
Forbidden functions : None

You know integers and you also know floating point numbers. How cute.
Please read this 3-page article (1, 2, 3) to discover that you don’t. Go on, read it.

Until today, any numbers you used in your programs were basically integers or floating
point numbers, or any of their variants (short, char, long, double, etc). From your previous
reading, it’s safe to assume that integers and floating point numbers have opposite caracteristics.

But today, this will change. You are going to discover a new and awesome number
type: fixed point numbers! Always missing from most languages scalar types, fixed point
numbers offer a valuable balance between performance, accuracy, range and precision that
explains why these numbers are widely used in graphics, sound or scientific programming
to name a few.

As C++ lacks fixed point numbers, you’re going to add them yourself today. 
I’d recommend this article from Berkeley as a start. If it’s good for them, it’s good for you. 
If you have no idea what Berkeley is, read this section of their wikipedia page.


Write a canonical class to represent fixed point numbers:

• Private members:

◦ An integer to store the fixed point value.
◦ A static constant integer to store the number of fractional bits. This constant will always be the litteral 8.

• Public members:

◦ A default constructor that initializes the fixed point value to 0.
◦ A destructor.
◦ A copy constructor.
◦ An assignation operator overload.
◦ A member function int getRawBits( void ) const; that returns the raw
value of the fixed point value.
◦ A member function void setRawBits( int const raw ); that sets the raw
value of the fixed point value.