#include <iostream>
#include <string>

int main( void ) {
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;

    std::cout << str << std::endl;
    std::cout << *str_ptr << std::endl;
    std::cout << str_ref << std::endl;

    return 0;
}