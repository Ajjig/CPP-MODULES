CPPFILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

INC = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

CPPCOMPILER = c++

NAME = form

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS) $(INC)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)
