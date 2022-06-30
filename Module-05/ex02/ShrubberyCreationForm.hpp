#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    public :
        ShrubberyCreationForm( string const & target );
        ShrubberyCreationForm( ShrubberyCreationForm const & src );
        virtual ~ShrubberyCreationForm( void );
        ShrubberyCreationForm & operator = ( ShrubberyCreationForm const & obj );
        void execute( Bureaucrat const & executor ) const;
    private :
        string _target;
};