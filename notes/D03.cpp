#include <string>
#include <iostream>

static int g_distance;

class Animal
{
    private:
        int         _legs;
        std::string _type;
    protected: 
		// Quadruped   _legs[4];
        // Bird        _legs[2];
    public:
        Animal(std::string type) : _type(type) {std::cout << "Animal:" << type << std::endl;};
        Animal(Animal const &) {std::cout << "Copy:" << this->_type << std::endl;};
        Animal &operator=(Animal const &);
        ~Animal();
    
    void getLegs() { std::cout << this->_legs << std::endl;}
    void run(int distance) { g_distance += distance;};
    void finalDistance() { std::cout << g_distance << std::endl;}
};

class Quadruped : public Animal
{
	private:
		int _legs = 4;
    protected:
        // Dog();
        // Cat();
	public:
        void superRun(Animal Quadruped, int distance) {Quadruped.run(distance * 4);};
};

class Bird : public Animal
{
	private:
		std::string _type = "bird"; 
    protected:
        // Duck();
	public:
        void slowRun(Animal Bird,int distance) {Bird.run(distance * 4);};
        void superfly(int distance) {g_distance * 2;};
};

class Duck : public Bird
{
    public:
        // Duck() {std::cout << "duck goes\n";};
        // Duck(Duck const &copy);
        // Duck &operator=(Duck const &);
        // ~Duck();
};

class Dog : public Quadruped
{
    public:
        // Dog() {std::cout << "dog goes\n";};
        // Dog(Dog const &copy);
        // Dog &operator=(Dog const &);
        // ~Dog();
};

class Cat : public Quadruped
{
    public:
        // Cat(std::string name)
        // Cat(Cat const &){std::cout << "cat goes\n";};
        // Cat &operator=(Cat const &);
        // ~Cat();
    //member:
    void scornSomeone(std::string const &target) { std::cout << target << "is now hurt" << std::endl; };
};

void checkDistance() 
{ 
    std::cout << " Animal runned" << g_distance << std::endl;
};

void StartRace(Animal Type1, Animal Type2, Animal Type3)
{
    // Dog bim = Type1();
    // Cat bam = Type2;
    // Duck bum;
}

int main() // can only access run()
{
    Animal doggy("dog");
    Animal catty("cat");
    Animal ducky("duck");
    
    StartRace(doggy, catty, ducky);
    doggy.getLegs();
    catty.finalDistance();
    ducky.finalDistance();

};