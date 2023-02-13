
D02

[3 new notions to add to our cpp arsenal]

_________________________________________________________________________________________________________________

AD HOC POLYMORPHISM 

- function overloading: define many functions accepting the same name but different parameters.


_________________________________________________________________________________________________________________

OPERATOR OVERLOAD


_________________________________________________________________________________________________________________

CANONICAL FROM

From now on, all your classes must be designed in the Orthodox Canonical Form,
unless explicitely stated otherwise. Then, they will implement the four required member
functions below:

• Default constructor
• Copy constructor
• Copy assignment operator
• Destructor

Split your class code into two files. The header file (.hpp/.h) contains the class
definition whereas the source file (.cpp) contains the implementation.
oravai-01-077

_________________________________________________________________________________________________________________

CONCLUSION

C++ is a general-purpose programming language created as an extension of the C programming language, or "C with Classes".

You know integers and you also know floating point numbers. How cute.
Please read this 3-page article (1, 2, 3) to discover that you don’t.

### MEMOS ABOUT THE ARTICLES:

__Understanding Fixed Point values__ 
a 4-byte floating point number holds fewer distinct values than a 4-byte integer. 
Bits representing an integer are interpreted literally as a binary number,
while bits in a floating point number have a more complicated interpretation

__Accuracy vs precision__ 
two concepts in measurement that nicely capture the different properties of ints and floats.
"Accuracy" refers to how close a measurement is to the true value
"precision" has to do with how much information you have about the quantity

__Dividing ints values__
Dividing two ints, 5 and 4 by for instance 2, will both result in 2. We cannot diferentiate them anymore.
Integers aren't able to keep track of the fractional part, so the difference between the two is now lost.

__Consider the 1/3 calculation__
No finite decimal digit could have the absolute representation (e.g. 0.333333), there'll never be enough 3's,
you're going to be wrong by at least a little bit no matter what you do. That's why floats are useful.

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

# What I learned:

Printing float values on cpp98 is a bit messy if you do it this way: 
    SetValue( 55 / 6 ) - you kinda need the fixed point value here, to make it precise.