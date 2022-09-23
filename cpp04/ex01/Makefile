NAME		=	brain

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

HEADER		= 	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

SRCS		=	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			=	rm -f

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)