#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string const & target) : Form(target, 145, 137) {
    this -> _target = target;
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {
    this -> _target = src._target;
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = ( ShrubberyCreationForm const & obj ) {
    this -> _target = obj._target;
    std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this -> getGradeToExecute()) {
        throw ShrubberyCreationForm::GradeTooLowException();
    }
    std::cout << "Creating a tree for " << this -> _target << std::endl;
    std::ofstream out(this -> _target + "_shrubbery");
    if (out.is_open() == false)
        return ;
    out << "                                                         .\n\
                                              .         ;  \n\
                 .              .              ;%     ;;   \n\
                   ,           ,                :;%  %;   \n\
                    :         ;                   :;%;'     .,   \n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'   \n\
                        `@%.  `;@%.      ;@@%;         \n\
                          `@%%. `@%%    ;@@%;        \n\
                            ;@%. :@%%  %@@%;       \n\
                              %@bd%%%bd%%:;     \n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                           A R G A N   T R E E \n\
                                %@@@%(o);  . '         \n\
                                %@@@o%;:(.,'         \n\
                            `.. %@@@o%::;         \n\
                               `)@@@o%::;         \n\
                                %@@(o)::;        \n\
                               .%@@@@%::;         \n\
                               ;%@@@@%::;.          \n\
                              ;%@@@@%%:;;;. \n\
                          ...;%@@@@@%%:;;;;,..\n";

    return;
}

ShrubberyCreationForm * ShrubberyCreationForm::clone(string target) {
    return new ShrubberyCreationForm(target);
}