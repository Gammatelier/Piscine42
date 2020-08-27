/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:48:01 by dhers             #+#    #+#             */
/*   Updated: 2020/08/25 11:02:38 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_display_file(int file_desc)
{
	char buffer;

	while (read(file_desc, &buffer, 1))
		write(1, &buffer, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_read_keyboard(void)
{
	char	buffer;

	while (read(0, &buffer, 1))
		write(1, &buffer, 1);
}

void	ft_errno(char *program_name, char *filename, int is_directory)
{
	write(1, basename(program_name), ft_strlen(basename(program_name)));
	write(1, ": ", 2);
	write(1, filename, ft_strlen(filename));
	write(1, ": ", 2);
	if (is_directory != 0)
		write(1, "Is a directory", 14);
	else
		write(1, strerror(errno), ft_strlen(strerror(errno)));
	write(1, "\n", 1);
}
