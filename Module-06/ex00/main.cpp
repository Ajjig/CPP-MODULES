#include "UnknownStr.hpp"

int main( int ac, char **av ) {
    if (ac != 2) {
        std::cout << "Invalid number of arguements" << std::endl;
        return 1;
    }
    try {
        UnknownStr str(av[1]);
        str.print();
    }
    catch (UnknownStr::InvalidStrException &e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
}