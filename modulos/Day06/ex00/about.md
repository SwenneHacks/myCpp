
# Exercise : 00
## Conversion of scalar types

Allowed functions : 
Any function to convert from a string to an int, afloat or a double. 
This will help, but won’t do the whole job.

Write a static class ScalarConverter that will contain a method "convert" takes as
parameter a string representation of a C++ literal in its most common form. This literal
must belong to one of the following a scalar types:

• char
• int
• float
• double

Except for char parameters, only the decimal notation will be used.
Examples of char literals: ’c’, ’a’, ...

To make things simple, please note that non displayable characters shouldn’t be used as
inputs. If a conversion to char is not displayable, prints an informative message.
Examples of int literals: 0, -42, 42...
Examples of float literals: 0.0f, -4.2f, 4.2f...

You have to handle these pseudo literals as well (you know, for science): -inff, +inff
and nanf.

Examples of double literals: 0.0, -4.2, 4.2...
You have to handle these pseudo literals as well (you know, for fun): -inf, +inf and nan.


#### #### ####
# STUDY NOTES: STATIC CAST

C++ supports 4 types of casting:

Static Cast
Dynamic Cast
Const Cast
Reinterpret Cast

Static Cast
This is the simplest type of cast that can be used. It is a compile-time cast. 
It does things like implicit conversions between types (such as int to float, 
or pointer to void*), and it can also call explicit conversion functions.

Syntax of static_cast
static_cast <dest_type> (source);
The return value of static_cast will be of dest_type.


# STUDY NOTE: PRESCISION IN FLOATING POINT NUMBERS

The data type float has 24 bits of precision. 
This is equivalent to only about 7 decimal places. 
(The rest of the 32 bits are used for the sign and size of the number.)

std::setprecision(int 'number_of_decimals') 
Defined in header <iomanip>