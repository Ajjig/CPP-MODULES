#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat(string type);
        ~Cat();
        Cat( void );
        void makeSound() const;
    private:
        Brain * _brain;
};