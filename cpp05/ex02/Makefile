# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 12:04:58 by gromero-          #+#    #+#              #
#    Updated: 2023/08/14 10:38:42 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	source/main.cpp source/Bureaucrat.cpp source/AForm.cpp \
				source/ShrubberyCreationForm.cpp source/RobotomyRequestForm.cpp \
				source/PresidentialPardonForm.cpp

OBJ_SRC		=	 $(SRC:.cpp=.o)

EXEC		=	28B

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
