#pragma once
#include <string>
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

