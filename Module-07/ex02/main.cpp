#include "Array.hpp"
#include "Array.tpp"

int main( void ) {
    Array<int> array(8);
    array[2] = 42;
    array[3] = 43;
    array[4] = 44;
    // test operator []
    for (unsigned int i = 0; i < array.size(); i++) {
        std::cout << array[i] << std::endl;
    }
    std::cout << "==============================" << std::endl;
    // test operator =
    Array<int> array2(468);
    array2 = array;
    for (unsigned int i = 0; i < array2.size(); i++) {
        std::cout << array2[i] << std::endl; // this should print 42, 43, 44 as the array is copied
    }
    std::cout << "==============================" << std::endl;
    // test copy constructor
    Array<int> array3(array);
    for (unsigned int i = 0; i < array3.size(); i++) {
        std::cout << array3[i] << std::endl; // this should print 42, 43, 44 as the array is copied
    }
    std::cout << "==============================" << std::endl;
    // test exeption
    try {
        std::cout << array[4879] << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}