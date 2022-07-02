#include "iter.hpp"

void println(int & i) {
    std::cout << i << std::endl;
}

void powerOfTwo(int & i) {
    i *= i;
}

int main( void ) {
    int iArray[5] = {4, 5, 6, 7, 8};
    

    ::iter< int >(iArray, 5, &println);     // will print each element of the array
    ::iter< int >(iArray, 5, & powerOfTwo); // will apply the function to each element of the array
    ::iter< int >(iArray, 5, & println);    // will print each element of the array

}