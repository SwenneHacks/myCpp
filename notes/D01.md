D01

_____________________________________________________________________________________________

NEW | DELETE


Memory Management
malloc objects in classes won't work 
(because it won't call the constructors/destructors)

STACK       	    HEAP
main	            dynamic
(static)			mem

when pointing/allocating to heap make sure to 
use new array[] and then delete[] 
at the end of function()


new is used to allocate memory for a C++ class object, 
    the object's constructor is called after the memory is allocated. 
delete is used to deallocate the memory allocated by the new operator.


_____________________________________________________________________________________________


REFERENCES

upgrader to pointer (simpler) = alias to an existing variable, 
or better said: it's a pointer that is constant and always unreferenced and never void.
Cant reference to nothing. You gotta declare/assign it to a var.


_____________________________________________________________________________________________


FILE - STREAM


INPUT / OUTPUT streams 
Now we can interact with files.

(We have already learned how to handle standard in/output + error).

ifstream (input filestream)  
ofstream (output filestream)

Don't forget to ifs.close() afterwards!

Extra ones:
std::sstream
std::istringstream
std::ostringstream
