# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:59:32 by gromero-          #+#    #+#              #
#    Updated: 2023/06/22 09:54:52 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	source/main.cpp source/replace.cpp

OBJ_SRC		=	 $(SRC:.cpp=.o)

EXEC		=	replace

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
