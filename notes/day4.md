

Shallow Copy 	

1.	When we create a copy of object by copying data of all member variables as it is, then it is called shallow copy 	
2.	A shallow copy of an object copies all of the member field values.	 
3.	In shallow copy, the two objects are not independent	
4.	It also creates a copy of the dynamically allocated objects	

Deep copy

1. When we create an object by copying data of another object along with the values of memory resources that reside outside the object, then it is called a deep copy
2. Deep copy is performed by implementing our own copy constructor.
3. It copies all fields, and makes copies of dynamically allocated memory pointed to by the fields
4. If we do not create the deep copy in a rightful way then the copy will point to the original, with disastrous consequences.