#pragma once
#include "Animal.hpp"

class Brain {
    public:
        Brain();
        ~Brain();
        Brain( const Brain &src );
        Brain & operator = ( const Brain &src );
    private:
        string ideas[100];
};