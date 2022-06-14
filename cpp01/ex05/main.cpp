#include "Harl.hpp"

int main ( void ) {
    Harl h;
    std::cout << "debug :" << std::endl;
    h.complain("debug");
    std::cout << "info :" << std::endl;
    h.complain("info");
    std::cout << "warning :" << std::endl;
    h.complain("warning");
    std::cout << "error :" << std::endl;
    h.complain("error");
    std::cout << "invalid :" << std::endl;
    h.complain("invalid");
}