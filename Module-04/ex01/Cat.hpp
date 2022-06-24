#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat(string type);
        ~Cat();
        Cat( void );
        void makeSound() const;
        Cat( const Cat &src );
        Cat & operator = ( const Cat &src );
    private:
        Brain * _brain;
};