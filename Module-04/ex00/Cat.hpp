#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(string type);
        ~Cat();
        Cat( void );
        void makeSound() const;
};