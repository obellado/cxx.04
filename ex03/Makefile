# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obellado <obellado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 18:00:15 by obellado          #+#    #+#              #
#    Updated: 2021/07/31 20:56:39 by obellado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	go

CXX		=	clang++

FLAGCXX =	-Wall -Wextra -Werror
SRCS	=	main.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp AMateria.cpp


OBJS			= $(SRCS:.cpp=.o)

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(FLAGCXX) -o ${NAME} ${OBJS}

%.o:	%.cpp Makefile AMateria.hpp Character.hpp ICharacter.hpp MateriaSource.hpp IMateriaSource.hpp
		$(CXX) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
