
# Exercise : 01
Serialization

Implement a static class Serializer with the following methods:
uintptr_t serialize(Data* ptr);

It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data* deserialize(uintptr_t raw);

It takes an unsigned integer parameter and converts it to a pointer to Data.
Write a program to test that your class works as expected.

You must create a non-empty (it means it has data members) Data structure.

Use serialize() on the address of the Data object and pass its return value todeserialize(). Then, ensure the return value of deserialize() compares equal to the original pointer.

Do not forget to turn in the files of your Data structure.


## STUDY NOTES

the implementation and usage of the Serializer static class:


SERIALIZATION

Serialization is the process of converting an object or data structure into a format that can be stored or transmitted. In this case, we are serializing the address of the Data object.


DESERIALIZATION

Deserialization is the reverse process of serialization, where the serialized data is converted back into its original form. Here, we are deserializing the serialized value back into a pointer to Data.


reinterpret_cast

The reinterpret_cast operator is used to convert a pointer of one type to a pointer of another type, or to convert an integer value to a pointer and vice versa.

In the code, we use reinterpret_cast<uintptr_t>(ptr) to convert the Data* pointer to uintptr_t for serialization, and reinterpret_cast<Data*>(raw) to convert uintptr_t back to Data* for deserialization. Note that this type of casting should be used with caution, as it bypasses normal type checking.

reinterpret_cast is the <most dangerous cast>, and should be used very sparingly. It turns one type directly into another — such as casting the value from one pointer to another, or storing a pointer in an int, or all sorts of other nasty things. 

Largely, the only guarantee you get with reinterpret_cast is that normally if you cast the result back to the original type, <you will get the exact same value> (but not if the intermediate type is smaller than the original type).

There are a number of conversions that reinterpret_cast cannot do, too. It's used primarily for particularly weird conversions and bit manipulations, like turning a raw data stream into actual data, or storing data in the low bits of a pointer to aligned data.


uintptr_t:

uintptr_t is an unsigned integer type provided by the <cstdint> header in C++. It is guaranteed to be able to hold a pointer value.
We use uintptr_t to store the serialized representation of the pointer, as it ensures that the pointer value is preserved without any loss of information.



The correct implementation of the Serializer class:

reinterpret_cast should not be used for both the serialization and deserialization process.

Since reinterpret_cast simply reinterprets the raw bits of the pointer as an integer value (serialization) and vice versa (deserialization), it does not capture the state or content of the Data object. As a result, modifying the data object before deserialization does not affect the deserialized pointer.

To achieve proper serialization and deserialization, you need a mechanism that captures the state of the object and reconstructs it correctly. One possible approach is to use a byte array to serialize and deserialize the Data object. Here's an example implementation that demonstrates this approach:



