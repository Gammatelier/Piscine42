# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhers <dhers@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 06:12:43 by dhers             #+#    #+#              #
#    Updated: 2020/08/26 07:29:18 by dhers            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_tail
CFLAGS	=	-Wall -Wexta -Werror
RM		=	rm -f
SRCS	=	ft_tail.c ft_tail2.c ft_tail3.c

${NAME}:
			gcc ${FLAGS} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			${RM} *.o

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
