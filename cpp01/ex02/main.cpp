#include <iostream>
#include <string>

int main( void ) {
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;

    std::cout << str << std::endl;
    std::cout << str_ptr << std::endl;

    return 0;
}