/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 07:25:59 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 14:08:37 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_header(char *filename, int argc)
{
	if (argc > 3)
		write(1, "\n", 1);
	write(1, "==> ", 4);
	write(1, filename, ft_strlen(filename));
	write(1, " <==", 4);
	write(1, "\n", 1);
}

int		ft_read_size(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

int		ft_length_bytes(int file_desc)
{
	char	buffer;
	int		bytes;

	bytes = 0;
	while (read(file_desc, &buffer, 1))
		bytes++;
	return (bytes);
}

void	ft_display_bytes(int file_desc, int nb)
{
	char	buffer;
	int		bytes;

	bytes = 0;
	while (bytes != nb && read(file_desc, &buffer, 1))
		bytes++;
	while (read(file_desc, &buffer, 1))
		write(1, &buffer, 1);
}
