#C++ - Module 01

Chapter VI
Exercise 02: Mutated abomination
Exercise : 02

Mutated abomination

Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp, MutantStack.{h, hpp}
and optional file: MutantStack.tpp
Forbidden functions : None

Now, time to move on more serious things. Let’s develop something weird. 

# The std::stack container is one of the only STL Containers that is NOT iterable. 
That’s too bad. But why would we accept this? Especially if we can take the 
liberty of butchering the original stack to create missing features.

To repair this injustice, you have to make the std::stack container iterable.
# Write a MutantStack class. It will be implemented in terms of a std::stack.

It will offer all its member functions, plus an additional feature: iterators.
Of course, you will write and turn in your own tests to ensure everything works 
as expected.

If you run it a first time with your MutantStack, 
and a second time replacing the MutantStack with, for example, a std::list, 
the two outputs should be the same.

Of course, when testing another container, update the code below with the 
corresponding member functions (push() can become push_back()).