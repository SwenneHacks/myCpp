

C++ NOTIONS:

Namespace - way of putting together some symbols and functions, having a semantic relationship, and making some kind of bag. 
Input and output streams (stdio) - bay to handle standard in/output + errors (new syntax)
Class and Instances - object-oriented programming tools 
Member attribute & function - method to call functions belonging to a class 
This - instance variable (pointer)
Init_list - list initialization, creating instances with unusual syntax to initialize constants and classes
Const(ants) - syntaxt of a constant in a class
Encapsulation - private/public thingy (structures) 
Assessors - access private attributes to give/update values in a safe way
Comparisons - knowing how instances will behave in a bowling comparison?
non_member - Static Attributes keyword ( different from C )
Pointers - not possible with memmber attributes


_____________________________________________________________________________

NAMESPACE

Allows a group to gather symbols and functions - having a semantic relation in the same set. 
This set/bag will have the same namespace. 
Used to do in C: symbols and functions gathered in files (aka compilation unit). 
The more advances/complicated the bigger the file, not practical to work with huge files.
Now in C++: split them into small files and still have these symbols together, but in a larger notion extended in many files with a given name.

SYNTAX:
namespace 		______(name) = _______ (alias)
:: scope resolution operator 
std:: (standard c library)



_____________________________________________________________________________

INPUT AND OUTPUT

std i/o manipulation 
(write and read)
used in C: get_next_line (quite a hassle)
now in c++: provides magical objects - cout & cin (allows to fetch or write data)
also provide two new operators such as >> << (allow you to coppy data flows)
endl : object corresponding to the carriage return (character output + newline)

EXAMPLE:
cin >>   FETCH DATA FROM STANDARD INPUT ; (such as variable buff)
cout << "data fetched = [" << __ (buff) ___ << ] << std::endl;
return 0;

<IOSTREAM>
the include for cout and cin (we are using c++98 - better for the basics/starters)



_____________________________________________________________________________
MANAGE OBJECTS

file_name.pre_extention.header_symbol (to filter files more easily)
Sample.class.hpp


_____________________________________________________________________________

CONSTRUCTOR AND DESTRUCTOR (producers, hidden void returns)

when classes are instantiated, the constructor will be called. 
Then when the program ends all destructors will be called.
Made a practice.cpp file on my github repository to study the next notions:


_____________________________________________________________________________

MEMBER ATTRIBUTES/FUNCTIONS

now you can access variables in the current instances with a DOT
instance.var = 42;
instance(.function();
_____________________________________________________________________________

THIS

Instance pointer to refer to the current instance.

this->var = 1;
this->function();
_____________________________________________________________________________

INITIALIZATION list

_____________________________________________________________________________

CONSTS

it's like READ ONLY constant values.
Can't change 'em.

_____________________________________________________________________________

VISIBILITY

Public and private keywords will allow me to control the encapsulation of the members of my class 
- meaning the attributes and the member functions will only be visible inside my class (via public) 
and only inside (private). This will grant you control in the structure and the design of your classes
- as you will be able to choose what part of your class you give the user access to and what you chose 
to keep private inside your class. To hide the implementation details of your class and leave visible 
from outside only the part that will be useful to your users.

Syntax: use _underscore prefix for private identifiers (or after if you like), 
Private dudys can only be used inside the class. 
Wanna call it in the main? Wont work.

_____________________________________________________________________________

CLASS vs STRUCT
Wait, this is awesome:

_____________________________________________________________________________

THE SCOPES
Struct is public by default
Class is private by default

The advantage here (class) is that you can do both (better control of the attributes) 
and add members functions + destructor/destructor.


_____________________________________________________________________________

ACCESSORS
Getters & Setters (object-oriented tools)

When you want to know or change the values 'private' attributes - offer accessors (special writing & reading proxy 
functions) that will be the interface between the user and your private attributes to be sure that the values are 
always correct. You can allow users to have certain access to it, without altering the instance.

Syntax: prefixed by Get and Set. 
+ use const for a Getter because it may only access in 'read-only' mode and won't alter the content of my class.
Setter only allows a user to set a value if it passes your parameter/definition (such as only positive values)


_____________________________________________________________________________

COMPARISONS
Some kind of easy comparing operators... A bit messy tho...
"notice how this construction comparison is something simple that can be perceived naturally"- he said
Ok, got it now. "Everyone understands what's all about" - ending.

WAIT, I SAW IT, A UNICORN!

if you have instance1 = 42 and instance2 = 42, they are structurally identical but physically different instances. 
Not the same address but the same content. To illustrate that you could use a comparison.
NO, I SAW IT AGAIN, IT'S A DRAGON!


_____________________________________________________________________________

Member and NonMember functions or attributes (it has to be instantiated)

Non Member behavior: like static keyword (have it work locally)
Static (usually allows you to allocate a variable) but will have a new semantic on c++ explained in the video. 
They don't work on the class level, only in the instance lvl. 
You can make a NonMember to be able to see how many instances have been made for example. 


_____________________________________________________________________________

POINTERS TO MEMBERS



_____________________________________________________________________________

CONCLUSION
David's favorites: Initialization and Const's

For robust codes: make sure that every member function in the class 
that doesn't change the current instance is declared and defined as const!!! "That's central..." - he said
Watch it later: non-member attributes and functions as well as the one on pointers for members fun/attri.

_____________________________________________________________________________
