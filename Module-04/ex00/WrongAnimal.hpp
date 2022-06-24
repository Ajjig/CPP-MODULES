#include "Animal.hpp"

class WrongAnimal {
    public:
        WrongAnimal(string _type);
        virtual ~WrongAnimal();
        WrongAnimal( void );
        void makeSound( void ) const;
        WrongAnimal( const WrongAnimal &src );
        WrongAnimal & operator = ( const WrongAnimal &src );
    private:
        string _type;
};