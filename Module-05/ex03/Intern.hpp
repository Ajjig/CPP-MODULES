#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

class Intern {
    public :
        Intern(void);
        Intern(Intern const & src);
        virtual ~Intern();
        Intern & operator=(Intern const & src);
        Form * makeForm(string name, string target);
        class UnknownFormException : public std::exception {
            public :
                virtual const char * what() const throw();
        };
    private :
        Form * _forms[3];
};