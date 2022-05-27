#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main(){
    //templed containers<types>
    std::list<int>                      lst; // just a simple list containing ints
    std::vector<int>                    vecN; // 
    std::vector<int>                    vecF(2,1);
    std::map<std::string, IOperation*>  map; // a cpp version of the c hash table {that's a data structure which stores data in an associative manner. In hash table, the data is stored in an array format where each data value has its own unique index value. Access of data becomes very fast, if we know the index of the desired data.}
    //       

    //operations
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(7);

// name["value"] = 
    map["opA"] = new OperationA;
    map["opB"] = new OperationB;

    std::list<int>::const_iterator  it;
    std::list<int>::const_iterator  ite = lst.end(); // this doesn't mean last element!
    // lst.end() it's actually a value meaning that we are over the last element (used to compare with first)
    // that's whar we are doing next (compare 'it' to 'ite'):
    
    for (it = lst.begin(); it != ite; it++) // on C you loop to while it reaches \0 character (null terminator)
        std::cout << *it << std::endl;

    return (0);
}