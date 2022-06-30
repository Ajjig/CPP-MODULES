#pragma once
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form{
    public :
        Form( string const &name, int const gradeToSign, int const gradeToExecute );
        Form( Form const &src );
        virtual ~Form( void );
        Form & operator = ( Form const &obj );
        string getName( void ) const;
        int getGradeToSign( void ) const;
        int getGradeToExecute( void ) const;
        bool getSigned( void ) const;
        void beSigned( Bureaucrat const & bureaucrat );
        class GradeTooHighException : public std::exception {
            public :
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                const char * what() const throw();
        };
    private :
        const string _name;
        const int _gradeToSign;
        const int _gradeToExecute;
        bool _isSigned;
};

std::ostream & operator << ( std::ostream & out, Form const & obj );