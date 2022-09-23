NAME		=	fixed_ex02

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

HEADER		= 	Fixed.hpp

SRCS		=	Fixed.cpp main.cpp

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