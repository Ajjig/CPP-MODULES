CPPFILES = main.cpp ClapTrap.cpp ScavTrap.cpp

INC = ClapTrap.hpp ScavTrap.hpp

CPPCOMPILER = c++

NAME = ScavTrap

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS) $(INC)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)