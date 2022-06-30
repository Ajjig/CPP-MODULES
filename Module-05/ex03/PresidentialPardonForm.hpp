#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form {
    public :
        PresidentialPardonForm( string const & target );
        PresidentialPardonForm( PresidentialPardonForm const & src );
        virtual ~PresidentialPardonForm( void );
        PresidentialPardonForm * clone(string target);
        PresidentialPardonForm & operator = ( PresidentialPardonForm const & obj );
        void execute( Bureaucrat const & executor ) const;
    private :
        string _target;
};