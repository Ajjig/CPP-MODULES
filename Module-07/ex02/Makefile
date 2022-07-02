CPPFILES = main.cpp

CPPCOMPILER = c++

INC = Array.hpp Array.tpp

NAME = Array

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS) $(INC)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)
