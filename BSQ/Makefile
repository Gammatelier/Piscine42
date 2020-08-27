# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atruphem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 14:11:16 by atruphem          #+#    #+#              #
#    Updated: 2020/08/26 12:36:40 by atruphem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ
SRC = bsq.c printer.c record.c file.c main.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $^

%.o: %.c
	gcc -c -Wall -Wextra -Werror $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
