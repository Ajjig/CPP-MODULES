#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string const & target) : Form(target, 145, 137) {
    this -> _target = target;
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
    this -> _target = src._target;
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator = ( RobotomyRequestForm const & obj ) {
    this -> _target = obj._target;
    std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this -> getGradeToExecute()) {
        throw RobotomyRequestForm::GradeTooLowException();
    }
    std::cout << this -> _target << " has been robotomized successfully." << std::endl;
    return;
}