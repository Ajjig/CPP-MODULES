#include "Harl.hpp"

int main ( int ac, char **av ) {
    Harl h;
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " {level}" << std::endl;
        return 0;
    }
    h.complain(av[1]);
}