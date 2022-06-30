#include "Intern.hpp"

Intern::Intern() {
    this -> _forms[0] = new RobotomyRequestForm("None");
    this -> _forms[1] = new ShrubberyCreationForm("None");
    this -> _forms[2] = new PresidentialPardonForm("None");
    std::cout << "Intern constructor called" << std::endl;
    return;
}

Intern::Intern(Intern const & src) {
    *this = src;
    std::cout << "Intern copy constructor called" << std::endl;
    return;
}

Intern & Intern::operator=(Intern const & src) {
    if (this != &src) {
        for (int i = 0; i < 3; i++) {
            _forms[i] = src._forms[i];
        }
    }
    std::cout << "Intern assignation operator called" << std::endl;
    return *this;
}

Intern::~Intern() {
    delete this -> _forms[0];
    delete this -> _forms[1];
    delete this -> _forms[2];
    std::cout << "Intern destructor called" << std::endl;
}

Form * Intern::makeForm(string name, string target) {
    string names[] = {"RobotomyRequest", "ShrubberyCreation", "PresidentialPardon"};
    int i = 0;
    for (; name != names[i]; i++) {}
    if (i >= 3)
        throw Intern::UnknownFormException();
    return _forms[i] -> clone(target);
}

const char * Intern::UnknownFormException::what() const throw() {
    return "Unknown Form Exception";
}