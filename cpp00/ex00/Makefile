# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 10:23:38 by gromero-          #+#    #+#              #
#    Updated: 2023/06/05 11:27:04 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	source/megaphone.cpp

OBJ_SRC		=	 $(SRC:.cpp = .o)

EXEC		=	megaphone

CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Werror -Wextra

all:		$(EXEC)

$(NAME):	all

$(EXEC):	$(OBJ_SRC)
	$(CC)	$(CFLAGS)	$(OBJ_SRC)	-o	$(EXEC)

clean:
	rm -f $(EXEC)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
