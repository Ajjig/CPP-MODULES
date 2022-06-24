#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(string _type);
        ~WrongCat();
        WrongCat( void );
        void makeSound( void ) const;
    private:
        string _type;
};