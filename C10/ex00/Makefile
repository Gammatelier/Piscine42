# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhers <dhers@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 10:08:42 by dhers             #+#    #+#              #
#    Updated: 2020/08/24 15:42:13 by dhers            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_display_file.c
NAME	=	ft_display_file
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

${NAME}:
			gcc ${CFLAGS} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			${RM} *.o

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
