#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main( void ) {
    RobotomyRequestForm f1("__f1__");
    PresidentialPardonForm f2("__f2__");
    ShrubberyCreationForm f3("__f3__");
    Bureaucrat b1("b1", 1);
    Bureaucrat b2("b2", 150);
    std::cout << "============= b1 ============="<< std::endl;
    b1.executeForm(f1);
    b1.executeForm(f2);
    b1.executeForm(f3);
    std::cout << "============= b2 ============="<< std::endl;
    b2.executeForm(f1);
    b2.executeForm(f2);
    b2.executeForm(f3);
    std::cout << "========================= EX03 ========================="<< std::endl;
    Intern intern;
    Form * form = nullptr;
    try {
        form = intern.makeForm("RobotomyRequest", "__target__"); // executes RobotomyRequestForm
        b1.executeForm(*form);
        delete form;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl
        << "exception ^^" << std::endl;
    }
    try {
        form = intern.makeForm("PresidentialPardon", "__target__"); // executes PresidentialPardonForm
        b1.executeForm(*form);
        delete form;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl
        << "exception ^^" << std::endl;
    }
    try {
        form = intern.makeForm("Invalid_one", "__target__"); // throws Intern::UnknownFormException
        b1.executeForm(*form);
        delete form;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl
        << "exception ^^" << std::endl;
    }

}