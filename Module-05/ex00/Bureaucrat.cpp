#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string name, int grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this -> _name = name;
    this -> _grade = grade;
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) {
    *this = obj;
}

Bureaucrat::Bureaucrat( void ) {
    this -> _name = "";
    this -> _grade = 150;
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & obj) {
    this -> _name = obj.getName();
    this -> _grade = obj.getGrade();
    return *this;
}

string Bureaucrat::getName( void ) const {
    return this -> _name;
}

void Bureaucrat::setName(string name) {
    this -> _name = name;
}

int Bureaucrat::getGrade( void ) const {
    return this -> _grade;
}

void Bureaucrat::setGrade(int grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this -> _grade = grade;
}

void Bureaucrat::incrementGrade( void ) {
    if (this -> _grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this -> _grade--;
}

void Bureaucrat::decrementGrade( void ) {
    if (this -> _grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this -> _grade++;
}

std::ostream & operator << (std::ostream & out, const Bureaucrat & obj) {
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return out;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "Too high grade exception thrown (grade < 1)";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Too low grade exception thrown (grade > 150)";
}