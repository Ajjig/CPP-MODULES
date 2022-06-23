#pragma once
#include <iostream>
#include <string>
#define string std::string

class Animal {
    public:
        Animal(string type);
        ~Animal();
        Animal( void );
        string getType() const;
        void setType(string type);
        void makeSound() const;
    protected:
        string type;
};