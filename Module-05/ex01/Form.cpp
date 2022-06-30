#include "Form.hpp"

Form::Form( string const &name, int const gradeToSign, int const gradeToExecute )
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

Form::Form( Form const & src )
    : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _isSigned(src._isSigned)
{

    std::cout << "Form copy constructor called" << std::endl;
}

string Form::getName() const {
    return this -> _name;
}

int Form::getGradeToSign() const {
    return this -> _gradeToSign;
}

int Form::getGradeToExecute() const {
    return this -> _gradeToExecute;
}

bool Form::getSigned() const {
    return this -> _isSigned;
}

void Form::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() > this -> getGradeToSign())
        throw Form::GradeTooLowException();
    this -> _isSigned = true;
}

Form & Form::operator = (Form const & obj) {
    if (this -> _gradeToSign < 1 || this -> _gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this -> _gradeToSign > 150 || this -> _gradeToExecute > 150)
        throw Form::GradeTooLowException();
    this -> _isSigned = obj._isSigned;
    return *this;
}


std::ostream & operator << (std::ostream & out, Form const & obj) {
    out << "Form " << obj.getName() << " is " << ((obj.getSigned()) ? "" : "not ") << "signed" << std::endl
        << "Grade to sign: " << obj.getGradeToSign() << std::endl
        << "Grade to execute: " << obj.getGradeToExecute() << std::endl;
    return out;
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}