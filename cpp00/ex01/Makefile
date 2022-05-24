CPPFILES = Contact.cpp PhoneBook.cpp main.cpp

OBJS = $(CPPFILES:.cpp=.o)

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++11

NAME = phonebook

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean $(NAME)