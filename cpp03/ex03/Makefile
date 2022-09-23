NAME		=	diamondtrap

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

HEADER		= 	ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

SRCS		=	ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp main.cpp

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