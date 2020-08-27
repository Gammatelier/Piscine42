# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhers <dhers@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 12:01:02 by dhers             #+#    #+#              #
#    Updated: 2020/08/25 11:08:06 by dhers            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_cat
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f
SRCS	=	ft_cat.c ft_cat2.c


${NAME}:
			gcc ${FLAGC} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			${RM} *.o

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
