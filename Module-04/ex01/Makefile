CPPFILES = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

INC = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

CPPCOMPILER = c++

NAME = Animal_brain

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS) $(INC)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)