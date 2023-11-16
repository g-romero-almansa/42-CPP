# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 10:59:48 by gromero-          #+#    #+#              #
#    Updated: 2023/07/12 10:34:47 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	source/main.cpp source/ClapTrap.cpp source/FragTrap.cpp \
				source/ScavTrap.cpp source/DiamondTrap.cpp

OBJ_SRC		=	 $(SRC:.cpp=.o)

EXEC		=	diamondtrap

CC			=	c++ -std=c++98
CPPFLAGS	=	-Wall -Werror -Wextra -Wshadow -Wno-shadow

all:		$(EXEC)

$(NAME):	all

$(EXEC):	$(OBJ_SRC)
	$(CC)	$(CPPFLAGS)	$(OBJ_SRC)	-o	$(EXEC)

clean:
	rm -f $(OBJ_SRC)

fclean:
	make clean
	rm -f $(EXEC)

re:	fclean all

.PHONY: all clean fclean re
