#include <iostream>
#include <array>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

Data * deserialize(void * raw)
{
    Data* data = new Data;

    for (int i = 0; i < 8; i++)
        data->s1 += *(reinterpret_cast<char*>(raw) + i);
    data->n += *(reinterpret_cast<int*>(raw) + (8 / sizeof(int)));
    for (int i = 12; i < 20; i++)
        data->s2 += *(reinterpret_cast<char*>(raw) + i);
    return (data);
}

void* serialize()
{
    static const char alphanum_chars[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    char *sequence = new char[20];

    std::cout << "S1 = ";
    for (int i = 0; i < 8; i++) {
        sequence[i] = alphanum_chars[rand() % (sizeof(alphanum_chars) - 1)];
        std::cout << sequence[i];
    }
    std::cout << std::endl;
    *reinterpret_cast<int*>(sequence + 8) = rand();
    std::cout << "int N = " << *reinterpret_cast<int*>(sequence + 8) << std::endl;
    std::cout << "S2 = ";
    for (int i = 12; i < 20; i++) {
        sequence[i] = alphanum_chars[rand() % (sizeof(alphanum_chars) - 1)];
        std::cout << sequence[i];
    }
    std::cout << std::endl << std::endl;
    return (reinterpret_cast<void*>(sequence));
}

int main()
{
    srand(time(NULL));
    Data* data;
    void *raw = serialize();
    data = deserialize(raw);

    std::cout << "S1 = " << data->s1 << std::endl;
    std::cout << "int N = " << data->n << std::endl;
    std::cout << "S2 = " << data->s2 << std::endl << std::endl;

    std::cout << "size = " << sizeof(data->s1) << " + " << sizeof(data->n) << " + " << sizeof(data->s2) << " = " << (sizeof(data->s1) + sizeof(data->n) + sizeof(data->s2)) << std::endl;
    delete data;
    return 0;
}