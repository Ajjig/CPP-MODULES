CPPFILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CPPCOMPILER = c++

NAME = exe

INC = HumanA.hpp HumanB.hpp Weapon.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS) $(INC)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)