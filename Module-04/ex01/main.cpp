#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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
    std::cout << "===========ex01===========" << std::endl;
    Animal * dog = new Dog();
    Animal * cat = new Cat();

    delete dog;
    delete cat;
    return 0;
}