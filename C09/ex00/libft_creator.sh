# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhers <dhers@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/20 19:02:01 by dhers             #+#    #+#              #
#    Updated: 2020/08/24 17:07:54 by dhers            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
gcc -c ft_putchar.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c
gcc -c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o
ranlib libft.a
rm *.o
