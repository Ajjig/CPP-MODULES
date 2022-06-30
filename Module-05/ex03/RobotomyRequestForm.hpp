#include "Form.hpp"

class RobotomyRequestForm : public Form {
    public :
        RobotomyRequestForm( string const & target );
        RobotomyRequestForm( RobotomyRequestForm const & src );
        RobotomyRequestForm * clone(string target);
        virtual ~RobotomyRequestForm( void );
        RobotomyRequestForm & operator = ( RobotomyRequestForm const & obj );
        void execute( Bureaucrat const & executor ) const;
    private :
        string _target;
};