#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator = (const Brain & src) {
    if (this == &src)
        return *this;
    for (unsigned int i = 0; i < this -> ideas -> length(); i++)
        this -> ideas[i] = src.ideas[i];
    return *this;
}

Brain::Brain(const Brain & src) {
    for (unsigned int i = 0; i < this -> ideas -> length(); i++)
        this -> ideas[i] = src.ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}