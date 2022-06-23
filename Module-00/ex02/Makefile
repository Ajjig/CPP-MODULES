CPPFILES = Account.cpp tests.cpp

OBJS = $(CPPFILES:.cpp=.o)

CC = g++

CPPFLAGS = -Wall -Wextra -std=c++11

NAME = bank

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

clean :
	-@rm -rf $(OBJS)

fclean : clean
	-@rm -rf $(NAME)

re: fclean $(NAME)