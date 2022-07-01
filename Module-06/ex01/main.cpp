#include <string>
#include <iostream>
#define string std::string

typedef struct Data {
    int x;
    int y;
    string name;
} Data;

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t nb) {
    return reinterpret_cast<Data*>(nb);
}

int main( void ) {
    Data data;
    data . x = 42;
    data . y = 13;
    data . name = "__Name";
    Data *ptr = &data;
    
    uintptr_t nb = serialize(ptr);
    std::cout << "nb = " << nb << std::endl; // this will print an undifined value
    ptr = deserialize(nb);
    std::cout << "ptr  -> x   = " << ptr->x << std::endl; // this will print 42
    std::cout << "ptr  ->  y  = " << ptr->y << std::endl; // this will print 13
    std::cout << "ptr -> name = " << ptr->name << std::endl; // this will print __Name
}