#include <iostream>

struct Struct {
    int foo;
};

//    indentifier, data-structure:
class Class {

public:

    int   var;
    Class(void);
    ~Class(void);
    void function(void);

};

class Const {

public:

    float const pi;
    int         qd;
    Const(float const f);
    ~Const(void);
    void f(void)const;

};

class Sample {

public:

    char    x;
    int     y;
    float   z;
    Sample(char a, int b, float c);
    ~Sample();
    static int getInstNum(void);

    private:

    static int _InstNum;
};
//      always finish with ;


Class::Class(void){
    std::cout << "Class Constructor called" << std::endl;
}

Class::~Class(void){
    std::cout << "Distructor1 called" << std::endl;
}

void Class::function(void){
    std::cout << "Class function called" << std::endl;
    this->var = 43;
    std::cout << "var pointer here: " << this->var << std::endl;
}

Sample::Sample(char a, int b, float c) : x(a), y(b), z(c){
    std::cout << "Sample Constructor called" << std::endl;
    std::cout << "Number of instances: " << Sample::getInstNum() << std::endl;
    std::cout << "this -> x = " << this->x << std::endl; 
    std::cout << "this -> y = " << this->y << std::endl;
    std::cout << "this -> z = " << this->z << std::endl;
    Sample::_InstNum += 1;
}

Sample::~Sample(){
    std::cout << "Distructor2 called" << std::endl;
    Sample::_InstNum -= 1;
    std::cout << "Number of instances: " << Sample::getInstNum() << std::endl;
}

int Sample::getInstNum(void){
    return Sample::_InstNum;
}

int Sample::_InstNum = 0;

Const::Const(float const f) : pi(f), qd(42) {
    std::cout << "Const Constructor called" << std::endl;
}

Const::~Const(void){
    std::cout << "Distructor3 called" << std::endl; 
}

void Const::f(void)const {
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;
}
// above the class files, where you can define the namespaces

void f(void){
    Sample instance2('b', 44, 3.2f);
    std::cout << "Number of instances: " << Sample::getInstNum() << std::endl;
}

// above an example of non member funtion/attributes - useful to count how many instances have been made.

int main()
{
    Class instance;
    instance.var = 42;
    instance.function();
    std::cout << "Now we're at main. var: " << instance.var << std::endl;
    //
    Sample instance1('a', 42, 4.2f);
    f();
    std::cout << "here -> x = " << instance1.x << std::endl; 
    std::cout << "here -> y = " << instance1.y << std::endl;
    std::cout << "here -> z = " << instance1.z << std::endl;
    //
    Const instance3(3.14f);
    instance3.f();
    //
    Struct S;
    std::cout << "Struct var: " << S.foo << std::endl;
    S.foo = 42;
    std::cout << "Leaving main. var: " << S.foo << std::endl;
    return 0;
}

// Static/Dynamic > instance in this case is a local variable.
