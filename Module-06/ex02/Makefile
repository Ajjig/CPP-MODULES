CPPFILES = main.cpp UnknownStr.cpp

INC = UnknownStr.hpp

CPPCOMPILER = c++

NAME = convert

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS) $(INC)
	$(CPPCOMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -rf $(OBJS)
fclean : clean
	-@rm -rf $(NAME)
re : fclean $(NAME)
