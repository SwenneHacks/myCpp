#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Class Student
// {
//     private:
//             string _login;
//     public:
// }

void byPtr(string *str){
    *str += " and ponies";
}

void byConstPtr(string const *str){
    cout << *str << endl;
}

void byRef(string &str){
    str += " and ponies";
}

void byConstRef(string const &str){
    cout << str << endl;
}

int main()
{
    // Part1 = NEW and DELETE memory manipulation (de/allocation)

    int stack = 42;

    int* ptr = &stack; // pointer to adress
    int& ref = stack;  // reference = alias to existant variable

    cout << stack << " " << *ptr << " " << ref << endl;

    stack = 40;                 // assigning new value directly;
    cout << stack << " ";
    *ptr = 21;                  // changing what is being pointed;
    cout << stack << " ";
    ref = 84;                   // changing the value usead as alias;
    cout << stack << endl << endl;

    // Part2 (references as parameter and returns)

    string str = "i like pandas";
    cout << str << endl;
    byPtr(&str);
    byConstPtr(&str);

    str = "i like cats";
    cout << str << endl;
    byRef(str);
    byConstRef(str);
    cout << endl;

    // Part3 (file streams)

    ifstream ifs("numbers");
    int a = 5;
    int b = 0;
    ifs >> a >> b;
    cout << a << " " << b << endl;
    ifs.close();

    ofstream ofs;
    ofs.open("example.txt");
    ofs << "test test test\n";
    ofs.close();
}
