#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(string _type);
        ~WrongCat();
        WrongCat( void );
        void makeSound( void ) const;
        WrongCat( const WrongCat &src );
        WrongCat & operator = ( const WrongCat &src );
    private:
        string _type;
};