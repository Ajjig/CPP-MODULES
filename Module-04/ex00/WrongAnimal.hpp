#include "Animal.hpp"

class WrongAnimal {
    public:
        WrongAnimal(string _type);
        ~WrongAnimal();
        WrongAnimal( void );
        virtual void makeSound( void ) const;
    private:
        string _type;
};