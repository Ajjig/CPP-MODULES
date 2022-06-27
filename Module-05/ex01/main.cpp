#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {
    Bureaucrat b("Bob", 10);
    Form canSign("canSign", 10, 10);
    Form cannotSign("cannotSign", 5, 7);
    b.signForm(canSign);
    b.signForm(cannotSign);
}