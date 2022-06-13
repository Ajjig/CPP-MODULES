CPPFILES = main.cpp

CPPCOMPILER = c++

NAME = replace

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)