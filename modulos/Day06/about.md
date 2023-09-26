first, check if you are really recognizing type
second, cout &address to prove/test it 
third, cout std::typeinfo return to prove/test it

# Chapter I
## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as 
an extension of the C programming language, or "C with Classes" (source: Wikipedia).
The goal of these modules is to introduce you to Object-Oriented Programming.

This will be the starting point of your C++ journey. Many languages are recommended
to learn OOP. We decided to choose C++ since it’s derived from your old friend C.
Because this is a complex language, and in order to keep things simple, your code 
will comply with the C++98 standard.

We are aware modern C++ is way different in a lot of aspects. So if you want to
become a proficient C++ developer, it’s up to you to go further after the 42 Common
Core!

# Chapter II
## General rules

# Compiling
• Compile your code with c++ and the flags -Wall -Wextra -Werror
• Your code should still compile if you add the flag -std=c++98

# Formatting and naming conventions
• The exercise directories will be named this way: ex00, ex01, ... , exn
• Name your files, classes, functions, member functions and attributes as 
required in the guidelines.
• Write class names in UpperCamelCase format. Files containing class code will
always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you
have a header file containing the definition of a class "BrickWall" standing 
for a brick wall, its name will be BrickWall.hpp.
• Unless specified otherwise, every output messages must be ended by a new-line
character and displayed to the standard output.
• Goodbye Norminette! No coding style is enforced in the C++ modules. You can
follow your favorite one. But keep in mind that a code your peer-evaluators can’t
understand is a code they can’t grade. Do your best to write a clean and readable
code.

# Allowed/Forbidden

You are not coding in C anymore. Time to C++! Therefore:

• You are allowed to use almost everything from the standard library. Thus, instead
of sticking to what you already know, it would be smart to use as much as possible
the C++-ish versions of the C functions you are used to.

• However, you can’t use any other external library. It means C++11 (and derived
forms) and Boost libraries are forbidden. The following functions are forbidden
too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and
that’s it.

• Note that unless explicitly stated otherwise, the using namespace <ns_name> and
friend keywords are forbidden. Otherwise, your grade will be -42.

• You are allowed to use the STL in the Module 08 and 09 only. That means:
no Containers (vector/list/map/and so forth) and no Algorithms (anything that
requires to include the <algorithm> header) until then. Otherwise, your grade will
be -42.

# A few design requirements
• Memory leakage occurs in C++ too. When you allocate memory (by using the new
keyword), you must avoid memory leaks.
• From Module 02 to Module 09, your classes must be designed in the Orthodox
Canonical Form, except when explicitely stated otherwise.
• Any function implementation put in a header file (except for function templates)
means 0 to the exercise.
• You should be able to use each of your headers independently from others. Thus,
they must include all the dependencies they need. However, you must avoid the
problem of double inclusion by adding include guards. Otherwise, your grade will
be 0.

• You can add some additional files if you need to (i.e., to split your code).
As these assignments are not verified by a program, feel free to do so as long 
as you turn in the mandatory files.

• Sometimes, the guidelines of an exercise look short but the examples can show
requirements that are not explicitly written in the instructions.
• Read each module completely before starting! Really, do it.
• By Odin, by Thor! Use your brain!!!
You will have to implement a lot of classes. This can seem tedious,
unless you’re able to script your favorite text editor.
You are given a certain amount of freedom to complete the exercises.
However, follow the mandatory rules and don’t be lazy. You would
miss a lot of useful information! Do not hesitate to read about
theoretical concepts.

# Chapter III
## Additional rule

For each exercise, the type conversion must be solved using one specific 
type of casting. Your choice will be checked during defense.

## STUDY NOTES

C++ casts

A Cast operator is a unary operator which forces one data type to be converted into another data type.

<static_cast> is the first cast you should attempt to use. It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones). In many cases, explicitly stating static_cast isn't necessary, but it's important to note that the T(something) syntax is equivalent to (T)something and should be avoided (more on that later). A T(something, something_else) is safe, however, and guaranteed to call the constructor. static_cast can also cast through inheritance hierarchies. It is unnecessary when casting upwards (towards a base class), but when casting downwards it can be used as long as it doesn't cast through virtual inheritance. It does not do checking, however, and it is undefined behavior to static_cast down a hierarchy to a type that isn't actually the type of the object.

<const_cast> can be used to remove or add const to a variable; no other C++ cast is capable of removing it (not even reinterpret_cast). It is important to note that modifying a formerly const value is only undefined if the original variable is const; if you use it to take the const off a reference to something that wasn't declared with const, it is safe. This can be useful when overloading member functions based on const, for instance. It can also be used to add const to an object, such as to call a member function overload. const_cast also works similarly on volatile, though that's less common.

<dynamic_cast> is exclusively used for handling polymorphism. You can cast a pointer or reference to any polymorphic type to any other class type (a polymorphic type has at least one virtual function, declared or inherited). You can use it for more than just casting downwards – you can cast sideways or even up another chain. The dynamic_cast will seek out the desired object and return it if possible. If it can't, it will return nullptr in the case of a pointer, or throw std::bad_cast in the case of a reference. But it has some limitations, though. It doesn't work if there are multiple objects of the same type in the inheritance hierarchy (the so-called 'dreaded diamond') and you aren't using virtual inheritance. It also can only go through public inheritance - it will always fail to travel through protected or private inheritance. This is rarely an issue, however, as such forms of inheritance are rare.

<reinterpret_cast> is the most dangerous cast, and should be used very sparingly. It turns one type directly into another — such as casting the value from one pointer to another, or storing a pointer in an int, or all sorts of other nasty things. Largely, the only guarantee you get with reinterpret_cast is that normally if you cast the result back to the original type, you will get the exact same value (but not if the intermediate type is smaller than the original type). There are a number of conversions that reinterpret_cast cannot do, too. It's used primarily for particularly weird conversions and bit manipulations, like turning a raw data stream into actual data, or storing data in the low bits of a pointer to aligned data.