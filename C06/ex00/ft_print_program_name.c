/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:25:59 by dhers             #+#    #+#             */
/*   Updated: 2020/08/16 09:13:31 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char *argv[])
{
	if (argc)
	{
		write(1, argv[0], ft_strlen(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
