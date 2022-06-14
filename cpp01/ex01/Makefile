NAME = zombie

SRCS = Zombie.cpp main.cpp

INC = Zombie.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

OBJS = $(SRCS:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJS) $(INC)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-@rm -f $(OBJS)

fclean : clean
	-@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re $(NAME)