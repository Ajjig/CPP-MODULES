#include "whatever.hpp"


int main( void ) {
    string sA = "Hello";
    string sB = "World";
    int iA = 42;
    int iB = 69;
    std::cout << sA << " - " << sB << std::endl;
    ::swap< string >(sA, sB);
    std::cout << sA << " - " << sB << std::endl;

    std::cout << iA << " - " << iB << std::endl;
    ::swap< int >(iA, iB);
    std::cout << iA << " - " << iB << std::endl;

    float fA = 42.0f;
    float fB = 69.0f;
    long long lA = 484573092;
    long long lB = 6584798949;
    std::cout << "Min: " << ::min< long long >(lA, lB) << ", " << ::min< float >(fA, fB) << std::endl;
    std::cout << "Max: " << ::max< long long >(lA, lB) << ", " << ::max< float >(fA, fB) << std::endl;
    return 0;
}