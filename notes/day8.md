

# STL: Standard Template Library
contains a few important things:

- CONTAINERS
generic templated containers (able to contain anything and are very very
good implementation of most container types you might want to use as a developer).

- ALGORITHMS 
is a collection of algorithimical functions, that are pre implemented, allowing to make operations 
on a collection, which can be a standard container on STL or even a container you made yourself.

- OPERATIONS 
functions existent in containers to manipulate specific data (lists/vectors/deques)

- ITERATORS 
basically it's the STL container equivalent of pointers (not exactly the same),
you gotta instantiate, syntax bah, use dots to call.

- MAP 
it's a cpp version of a hash table. dictionary associate of ARRAY 
but we don't have to use strings as keys for values.

- VECTORS 
basically a smart array that contains whatever we need and we can use it in many ways,
you can declare it and give a value by default.



# Deque and Vector data structures (containers)
(smart arrays)

- Both allows insertion and deletion of elements, and they do that like a flash of light, but here's the difference:

- type of container:
DEQ: sequential - provides the functionality of double ended queue data structure.


- insertion/delition: 
DEQ: of middle, end and beginning.
VEC: using method at the middle of the end.


- storing elements;
DEQ: stored directly in data structure in continious fashion without any discrepancy in order.
VEC: stores them in a list of memory chunks of computer system in contiguous manner.

- performance:

VEC: 
performance gets poor when insertions/deletion of elements happen at the middle/front.
but enchanced when adding/deleting elements at the end. 

DEQ: 
decreased when performing deletion at the end.
increased when insertion/deletion happen from the front.

- better for what:
DEQ: faster than a vector for very large data sizes.
VEC: used to store spatial data.



# Lists vs Vector 
Insertion and Deletion:

LIST: 
- very efficient as compared to vector
- is a double linked sequence that supports both forward and backward traversal. 
- to insert an element in list at start, end or middle, internally just a couple of pointers are swapped.
- The time taken in the insertion and deletion in the beginning, end and middle is constant. 
- It has the non-contiguous memory and there is no pre-allocated memory.

VECTOR: 
- insertion and deletion at start or middle will make all elements to shift by one. 
- if there is insufficient contiguous memory in vector at the time of insertion, 
then a new contiguous memory will be allocated and all elements will be copied there.
- is a type of dynamic array which has the ability to resize automatically after insertion or deletion of elements. 
- The elements in vector are placed in contiguous storage so that they can be accessed and traversed using iterators.
- Element is inserted at the end of the vector.
