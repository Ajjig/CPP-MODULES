#pragma once
#include <iostream>
#include <string>
#define string std::string

class Animal {
    public:
        Animal(string type);
        virtual ~Animal();
        Animal( void );
        string getType() const;
        void setType(string type);
        virtual void makeSound() const;
    protected:
        string type;
};