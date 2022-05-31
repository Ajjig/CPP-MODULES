CPPFILES = megaphone.cpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++11

NAME = megaphone

OBJS = $(CPPFILES:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	-@rm -fr $(OBJS)

fclean: clean
	-@rm -fr $(NAME)

re: fclean $(NAME)