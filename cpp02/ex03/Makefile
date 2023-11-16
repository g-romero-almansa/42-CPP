# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 10:04:58 by gromero-          #+#    #+#              #
#    Updated: 2023/06/23 11:13:27 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	source/main.cpp source/Fixed.cpp source/Point.cpp source/bsp.cpp

OBJ_SRC		=	 $(SRC:.cpp=.o)

EXEC		=	bsp

CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Werror -Wextra

all:		$(EXEC)

$(NAME):	all

$(EXEC):	$(OBJ_SRC)
	$(CC)	$(CFLAGS)	$(OBJ_SRC)	-o	$(EXEC)

clean:
	rm -f $(OBJ_SRC)

fclean:
	make clean
	rm -f $(EXEC)

re:	fclean all

.PHONY: all clean fclean re
