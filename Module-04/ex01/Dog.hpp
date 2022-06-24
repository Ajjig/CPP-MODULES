#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    public:
        Dog(string type);
        ~Dog();
        Dog( void );
        void makeSound() const;
    private:
        Brain * _brain;
};