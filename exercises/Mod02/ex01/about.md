
__________________________________
Exercise 01: 
Towards a more useful fixed-point number class

Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp
Allowed functions : roundf (from <cmath>)

The previous exercise was a good start but our class is pretty useless.
It can only represent the value 0.0.
Add the following public constructors and public member functions to your class:

• A constructor that takes a constant integer as a parameter. It converts it to the 
corresponding fixed-point value. The fractional bits value is initialized to 8.
• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A member function <float toFloat( void ) const; 
that converts the fixed-point value to a floating-point value.
• A member function <int toInt( void ) const;
that converts the fixed-point value to an integer value.

And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.
