

Chapter VI
Exercise 02: Identify real type


Identify real type
Turn-in directory : ex02/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : std::typeinfo

Implement a Base class that has a public virtual destructor only. 
Create three empty classes A, B and C, that publicly inherit from Base.

These four classes don’t have to be designed in the Orthodox Canonical Form.
Implement the following functions:

Base * generate(void);
It randomly instanciates A, B or C and returns the instance as a Base pointer.
Feel free to use anything you like for the random choice implementation.

void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B" or "C".

void identify(Base& p);
It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer inside this function is forbidden.

Including the typeinfo header is forbidden.
Write a program to test that everything works as expected.



### STUDY NOTES

dynamic_cast is exclusively used for handling polymorphism.

You can cast a pointer or reference to any polymorphic type to any other class type (a polymorphic type has at least one virtual function, declared or inherited).
 
You can use it for more than just casting downwards – you can cast sideways or even up another chain. The dynamic_cast will seek out the desired object and return it if possible. 

If it can't, it will return nullptr in the case of a pointer, or throw std::bad_cast in the case of a reference.

dynamic_cast has some limitations, though. It doesn't work if there are multiple objects of the same type in the inheritance hierarchy (the so-called 'dreaded diamond') and you aren't using virtual inheritance. 

It also can only go through public inheritance - it will always fail to travel through protected or private inheritance. This is rarely an issue, however, as such forms of inheritance are rare.
