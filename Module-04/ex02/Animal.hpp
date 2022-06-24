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
        virtual void makeSound() const = 0;
        Animal(const Animal &src);
        Animal & operator = (const Animal &src);
    protected:
        string type;
};