# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obellado <obellado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 18:00:15 by obellado          #+#    #+#              #
#    Updated: 2021/07/26 23:38:06 by obellado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	go

CXX		=	clang++

FLAGCXX =	-Wall -Werror -Wextra

SRCS	=	main.cpp Animal.cpp 


OBJS			= $(SRCS:.cpp=.o)

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(FLAGCXX) -o ${NAME} ${OBJS}

%.o:	%.cpp Makefile Animal.hpp
		$(CXX) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
