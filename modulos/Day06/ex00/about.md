
# EX00 study notes: 


# static CLASS

In C++, a static class is a class that can only have static members. 
Static members are members that belong to the class rather than to an instance of the class. 
This means that they can be accessed without creating an instance of the class, and they are shared by all instances of the class. 

Static classes are often used for utility classes, such as mathematical functions or string manipulation functions, 
where it is not necessary to create an instance of the class to use the functions.


# static CAST

Examples of double literals: 0.0, -4.2, 4.2...
You have to handle these pseudo literals as well (you know, for fun): -inf, +inf and nan.


#### #### ####

# STUDY NOTES: static classes

In C++, a static class is a class that can only have static members. Static members are members that belong to the class rather than to an instance of the class. This means that they can be accessed without creating an instance of the class, and they are shared by all instances of the class. 

Static classes are often used for utility classes, such as mathematical functions or string manipulation functions, where it is not necessary to create an instance of the class to use the functions.


# static casting

C++ supports 4 types of casting: Static Cast, Dynamic Cast, Const Cast, Reinterpret Cast

Static Cast
This is the simplest type of cast that can be used. It is a compile-time cast. 
It does things like implicit conversions between types (such as int to float, 
or pointer to void*), and it can also call explicit conversion functions.

Syntax of static_cast
static_cast <dest_type> (source);
The return value of static_cast will be of dest_type.


# precision in floats

The data type float has 24 bits of precision. 
This is equivalent to only about 7 decimal places. 
(The rest of the 32 bits are used for the sign and size of the number.)

std::setprecision(int 'number_of_decimals') 
Defined in header <iomanip>



# numerical data types 

( INT, FLOATS, DOUBLES )
PRIMITIVE BUILTIN TYPES:

intigers (4bytes)
floats (4bytes)
doubles (8bytes)

MODIFIERS:

signed (+ - takes one bit)
unsigned ( above 0 )
short ( 2 bytes )
float ( 4 bytes )
double ( 8 bytes )
long ( 8 bytes - 12 bytes)

ARBITRARY PRECISION:

double = 64 bit [1][ 11 bit exponent ].[ 52 bit significand ] =  6-7 significant digits

float  = 32 bit [1][ 8 bit exponent ].[ 23 bit significand ] = 15-16 significant digits

