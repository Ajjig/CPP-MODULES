#include "Bureaucrat.hpp"

int main( void ) {
    Bureaucrat b("Bob", 1);
    try {
        std::cout << b << std::endl;
        b.incrementGrade(); // throws GradeTooHighException
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat b2("Bob", 151); // test exception GradeTooLowException
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}