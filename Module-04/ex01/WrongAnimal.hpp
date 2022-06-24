#include "Animal.hpp"

class WrongAnimal {
    public:
        WrongAnimal(string _type);
        virtual ~WrongAnimal();
        WrongAnimal( void );
        void makeSound( void ) const;
    private:
        string _type;
};