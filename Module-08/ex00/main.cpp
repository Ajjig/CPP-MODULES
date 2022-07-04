#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>

int main( void ) {
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i + 1);
    }

    std::cout << "easyfind(vec, 5) : " << easyfind(vec, 5) << std::endl;    // this should print 4
    std::cout << "easyfind(vec, 11): " << easyfind(vec, 11) << std::endl;  // this should print -1

    std::array<int, 10> arr;
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    std::cout << "easyfind(arr, 5) : " << easyfind(arr, 5) << std::endl;    // this should print 4
    std::cout << "easyfind(arr, 11): " << easyfind(arr, 11) << std::endl;  // this should print -1
    return 0;
}