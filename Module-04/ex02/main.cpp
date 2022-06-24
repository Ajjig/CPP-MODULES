#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const Animal* j = new Dog("_Dog_");
    const Animal* i = new Cat("_Cat_");
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    delete i;
    std::cout << "==========================" << std::endl;
    delete j;
    std::cout << "==========================" << std::endl;
    /* * * * * * * * * * * * * * * * * * * * * * */
    std::cout << "===========ex01===========" << std::endl;
    Animal * dog = new Dog();
    Animal * cat = new Cat();
    cat -> makeSound();
    dog -> makeSound();

    delete dog;
    delete cat;
    return 0;
}