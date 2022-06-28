#include "Intern.hpp"

Intern::Intern() {
    this -> _forms[0] = new RobotomyRequestForm("None");
    this -> _forms[1] = new ShrubberyCreationForm("None");
    this -> _forms[2] = new PresidentialPardonForm("None");
    return;
}

Intern::Intern(Intern const & src) {
    *this = src;
    return;
}

Intern & Intern::operator=(Intern const & src) {
    if (this != &src) {
        for (int i = 0; i < 3; i++) {
            _forms[i] = src._forms[i];
        }
    }
    return *this;
}

Intern::~Intern() {
    delete this -> _forms[0];
    delete this -> _forms[1];
    delete this -> _forms[2];
}

Form * Intern::makeForm(string name, string target) {
    string names[] = {"RobotomyRequest", "ShrubberyCreation", "PresidentialPardon"};
    int i = 0;
    for (; name != names[i]; i++) {}
    return i < 3 ? _forms[i](*forms[i]) : throw Intern::UnknownFormException();
}

const char * Intern::UnknownFormException::what() const throw() {
    return "Unknown Form Exception";
}