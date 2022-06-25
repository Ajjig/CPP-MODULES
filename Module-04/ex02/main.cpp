#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    std::cout << "===========ex02===========" << std::endl;
    Animal * dog = new Dog();
    Animal * cat = new Cat();
    cat -> makeSound();
    dog -> makeSound();
    delete dog;
    delete cat;
    // Animal * animal = new Animal(); uncomment this line so the program will not compile cut Animal is abstract

    return 0;
}