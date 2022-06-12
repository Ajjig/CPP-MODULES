#include <iostream>
#include <string>

int main( void ) {
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;

    std::cout << "&str == " << &str << std::endl;
    std::cout << "&ptr == " << &str_ptr << std::endl;
    std::cout << "&ref == " << &str_ref << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "std == "<< str << std::endl;
    std::cout << "ptr == " << *str_ptr << std::endl;
    std::cout << "ref == " << str_ref << std::endl;

    return 0;
}