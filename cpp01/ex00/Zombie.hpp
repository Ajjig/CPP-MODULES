#pragma once
#include <string>
#include <iostream>
#define string std::string

class Zombie
{
    private:
        string name;
    public:
        Zombie(string name);
        Zombie();
        ~Zombie() {};
        void announce();
};

