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

Form::Form( Form const & src ) {
    *this = src;
    std::cout << "Form copy constructor called" << std::endl;
}

string Form::getName() const {
    return this -> _name;
}

int Form::getGradeToSign() const {
    return this -> _gradeToSign;
}

void Form::setGradeToSign( int const gradeToSign ) {
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    this -> _gradeToSign = gradeToSign;
}

int Form::getGradeToExecute() const {
    return this -> _gradeToExecute;
}

void Form::setGradeToExecute( int const gradeToExecute ) {
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    this -> _gradeToExecute = gradeToExecute;
}

bool Form::getSigned() const {
    return this -> _isSigned;
}

void Form::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() > this -> getGradeToSign())
        throw Form::GradeTooLowException();
    this -> _isSigned = true;
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