# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhers <dhers@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 12:35:09 by dhers             #+#    #+#              #
#    Updated: 2020/08/24 17:11:53 by dhers            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	=	srcs/
SRCS	=	${SRC_DIR}ft_putchar.c ${SRC_DIR}ft_putstr.c ${SRC_DIR}ft_strlen.c ${SRC_DIR}ft_strcmp.c ${SRC_DIR}ft_swap.c
HEADERS	=	includes
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a

.c.o:
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
