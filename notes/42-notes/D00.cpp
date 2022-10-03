#include <iostream>

std::string Y = "\x1b[33m";
std::string B = "\x1b[34m";
std::string R = "\x1b[0m";


//    indentifier, data-structure:
class Class {
public:
    Class(void);
    ~Class(void);
    void function(void);
    void bar(void)const;
    int  var;
};

//      always finish with ;
//      above .HPP bellow .CPP

Class::Class(void) : var(40) {
    std::cout << "Class Constructor called" << std::endl;
    std::cout << "var initialized here: " << this->var << std::endl;
}

Class::~Class(void){
    std::cout << "Distructor1 called" << std::endl;
}

void Class::function(void){
    std::cout << "Class function called" << std::endl;
    this->var = 43;
    std::cout << "var pointer here: " << this->var << std::endl;
}

void Class::bar(void) const{
    std::cout << "Second Class function called" << std::endl;
    //this->var = 45; cannot assign non-static data within const function
    std::cout << "another var pointer here: " << this->var << std::endl;
}

//________________________________________________________________ SAMPLE

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

//_______________________________________________________________ COSNT 

class Const {
public:
    float const pi;
    int         qd;
    Const(float const f);
    ~Const(void);
    void f(void)const;
};

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

//_______________________________________________________________ STACK non member funtion/attributes 

struct Struct { int foo;};

int Sample::_InstNum = 0;

void f(void){
    Sample instance2('b', 44, 3.2f);
    std::cout << "Number of instances: " << Sample::getInstNum() << std::endl;
}

int main()
{
    Class instance;
    Class * pointer = &instance;
    std::cout << B << "Now we're at main. var: " << R << instance.var << std::endl;

    int Class::*pp = NULL; // pointing to an integer member of the 'sample' class intialized to null;
    void (Class::*ff)(void)const; // pointer to function member, making an assignment. Specifying which instance bellow.
    ff = &Class::bar; // taking the address of the 'sample' class bar function mamber (not the other function)
    pp = &Class::var; // taking the address of the 'sample' class var member. Great way to assign new values.
    
    instance.*pp = 48; 
    // .* operator is used for updating attribute directly to the STACK instance specified (above)
    std::cout <<B<< "Pointer to STACK var: " <<R<< instance.var << std::endl;
    
    pointer->*pp = 42; 
    // -> operator used to point to a class pointer instance, directing it to instance address.
    std::cout <<B<< "Pointer to instance address: " <<R<< instance.var << std::endl;
    
    (pointer->*ff)(); 
    // calling bar function via pointer to member function on instance pointer.
    std::cout <<B<< "Pointer to function bar (const): "<<R<< instance.var << std::endl;

    instance.var = 44;
    std::cout <<B<< "Now declared STACK var: " <<R<< instance.var << std::endl;
    instance.function();
    std::cout <<B<< "Var after fuction call: " <<R<< instance.var << std::endl;
    
    //
    
    Sample instance1('a', 42, 4.2f);
    f();
    std::cout <<B<< "here -> x = " <<R<< instance1.x << std::endl; 
    std::cout <<B<< "here -> y = " <<R<< instance1.y << std::endl;
    std::cout <<B<< "here -> z = " <<R<< instance1.z << std::endl;
    
    //
    
    Const instance3(3.14f);
    instance3.f();
    
    //

    Struct S;
    std::cout <<B<< "Not initialized Struct foo: " <<R<< S.foo << std::endl;
    S.foo = 42;
    std::cout <<B<< "Leaving main. declared foo: " <<R<< S.foo << std::endl;
    return 0;
}

// Static/Dynamic > instance in this case is a local variable.
