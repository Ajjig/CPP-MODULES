#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {
    Bureaucrat b("Bob", 10);
    std::cout << "======== b ========" << std::endl;
    std::cout << b;
    Form canSign("canSign", 10, 10);
    std::cout << "======== canSign ========" << std::endl;
    std::cout << canSign;
    Form cannotSign("cannotSign", 5, 7);
    std::cout << "======== cannotSign ========" << std::endl;
    std::cout << cannotSign;
    b.signForm(canSign);
    b.signForm(cannotSign);
}