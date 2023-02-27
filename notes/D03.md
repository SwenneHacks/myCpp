# INHERITANCE - HERITAGE

A way to organize similiar classes. Creating children objects.
It's just a way to factorize behaviors of a set of diffirent classes with similiar behaviors.
Putting them together in one singe class 
that other classes can publicly or privatly inherit from it
(functions and members)


INSTANTIATE inherited classes.

# INCAPSULATION LEVEL:

Public means it's accessible from anywhere
Protected means it's only accessible from an instance of a class / or child

Example:

class Quadruped // can access name, run() and legs
{
	private:
		std::string name; // only accessible from an Quadruped object
	protected:
		Leg 		legs[4]; // accessible from an Quadruped or derived object
	public:
		void		run(); // accessible from wherever
};

class Dog : public Quadruped // can access run() and legs
{};

int main() // can only access run()
{};


# MULTIPLE INHERITANCE

# DIAMOND INHERITANCE

