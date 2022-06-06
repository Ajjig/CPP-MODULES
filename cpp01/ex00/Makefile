NAME = zombie

SRCS = zombie.cpp main.cpp

INC = zombie.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

OBJS = $(SRCS:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJS) 
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -f $(OBJS)

fclean : clean
	-@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re $(NAME)