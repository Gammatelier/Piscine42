/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 07:26:46 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 14:08:57 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail_bytes(char *argv, int nb, int argc)
{
	int		file_desc;
	int		size;

	if (argc > 4)
		ft_header(argv, argc);
	file_desc = open(argv, O_RDONLY);
	size = ft_length_bytes(file_desc) - nb;
	close(file_desc);
	file_desc = open(argv, O_RDONLY);
	if (size > 0)
		ft_display_bytes(file_desc, size);
	else
		ft_display_bytes(file_desc, 0);
}

void	ft_read_keyboard(int nb)
{
	int		size;
	int		bytes;
	char	buffer;
	char	*temp;

	bytes = 0;
	temp = malloc(sizeof(char) * 4096);
	while (read(0, &buffer, 1))
	{
		temp[bytes] = buffer;
		bytes++;
	}
	temp[bytes] = '\0';
	size = bytes - nb;
	bytes = 0;
	while (bytes < size && temp[bytes] != '\0')
		bytes++;
	while (temp[bytes] != '\0')
	{
		write(1, &temp[bytes], 1);
		bytes++;
	}
	free(temp);
}

void	ft_is_illegal(char *program_name, char *filename)
{
	write(2, basename(program_name), ft_strlen(basename(program_name)));
	write(2, ": ", 2);
	write(2, "illegal offset", 14);
	write(2, " --  ", 4);
	write(2, filename, ft_strlen(filename));
	write(2, "\n", 1);
}

void	ft_errno(char *program_name, char *filename)
{
	write(2, basename(program_name), ft_strlen(basename(program_name)));
	write(2, ": ", 2);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

int		ft_bad_arguments(int argc, char *program_name, char *filename)
{
	int size;

	if (argc < 3)
		return (0);
	size = ft_read_size(filename);
	if (size == -1)
	{
		ft_is_illegal(program_name, filename);
		return (0);
	}
	if (argc == 3 && size != 0)
	{
		ft_read_keyboard(size);
		return (0);
	}
	return (1);
}
