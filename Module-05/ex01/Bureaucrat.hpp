#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"
#define string std::string

class Bureaucrat {
    public :
        Bureaucrat(const string name, int grade);
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat( void );
        ~Bureaucrat( void );
        Bureaucrat & operator = (const Bureaucrat & obj);
        void incrementGrade( void );
        void decrementGrade( void );
        void setGrade(int grade);
        int getGrade( void ) const;
        string getName( void ) const;
        void setName(string name);
        void signForm(Form & form);
        class GradeTooHighException : public std::exception {
            public :
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                const char * what() const throw();
        };
    private :
        string _name;
        int _grade;
};

std::ostream & operator << (std::ostream & o, const Bureaucrat & obj);