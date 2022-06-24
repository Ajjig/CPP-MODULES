#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    std::cout << "==========================" << std::endl;
    delete j;
    std::cout << "==========================" << std::endl;
    delete meta;
    /* * * * * * * * * * * * * * * * * * * * * * */
    std::cout << "==========================" << std::endl;
    WrongAnimal * w = new WrongCat();
    w -> makeSound(); // this should output the wrong cat sound!
    delete w;
    return 0;
}