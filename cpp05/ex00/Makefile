# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 14:51:44 by gromero-          #+#    #+#              #
#    Updated: 2023/07/23 14:52:12 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	source/main.cpp source/Bureaucrat.cpp

OBJ_SRC		=	 $(SRC:.cpp=.o)

EXEC		=	bureaucrat

CC			=	c++ -std=c++98
CPPFLAGS	=	-Wall -Werror -Wextra

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
