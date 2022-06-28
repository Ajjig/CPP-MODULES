#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string const & target) : Form(target, 145, 137) {
    this -> _target = target;
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
    this -> _target = src._target;
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator = ( PresidentialPardonForm const & obj ) {
    this -> _target = obj._target;
    std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this -> getGradeToExecute()) {
        throw PresidentialPardonForm::GradeTooLowException();
    }
    std::cout << this -> _target << " has been robotomized successfully." << std::endl;
    return;
}