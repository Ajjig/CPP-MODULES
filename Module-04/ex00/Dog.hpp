#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(string type);
        ~Dog();
        Dog( void );
        void makeSound() const;
        Dog( const Dog &src );
        Dog & operator=( const Dog &src );
};