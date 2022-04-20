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
    void bar(void)const;
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
    Class * pointer = &instance;
    std::cout << "Now we're at main. var: " << instance.var << std::endl;

    int Class::*pp = NULL; // pointing to an integer member of the 'sample' class intialized to null;
    void (Class::*ff)(void)const; // pointer to function member, making an assignment. Specifying which instance bellow.
    ff = &Class::bar; // taking the address of the 'sample' class bar function mamber (not the other function)
    pp = &Class::var; // taking the address of the 'sample' class var member. Great way to assign new values.
    
    instance.*pp = 48; // .* operator is used for updating attribute directly to the STACK instance specified (above)
    std::cout << "Pointer to STACK var: " << instance.var << std::endl;
    pointer->*pp = 42; // -> operator used to point to a class pointer instance, directing it to instance address.
    std::cout << "Pointer to instance address: " << instance.var << std::endl;
    (pointer->*ff)(); // calling bar function via pointer to member function on instance pointer.
    std::cout << "Pointer to function bar (const): " << instance.var << std::endl;

    instance.var = 44;
    std::cout << "Now declared STACK var: " << instance.var << std::endl;
    instance.function();
    std::cout << "Var after fuction call: " << instance.var << std::endl;
    
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
    std::cout << "Not initialized Struct foo: " << S.foo << std::endl;
    S.foo = 42;
    std::cout << "Leaving main. declared foo: " << S.foo << std::endl;
    return 0;
}

// Static/Dynamic > instance in this case is a local variable.
