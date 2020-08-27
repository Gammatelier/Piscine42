/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 06:09:04 by dhers             #+#    #+#             */
/*   Updated: 2020/08/26 11:24:04 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////////////DOESN'T WORK/////////////

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void			ft_offset(int nb, int x)
{
	char *base;

	base = "0123456789abcdef";
	if (x < 8)
	{
		x++;
		ft_offset(nb / 16, x);
	}
	write(1, &base[nb % 16], 1);
}

void			ft_hexa(unsigned char c, int i, int size)
{
	char *base;

	base = "0123456789abcdef";
	if (i < size)
	{
		write(1, " ", 1);
		write(1, &base[c / 16], 1);
		write(1, &base[c % 16], 1);
	}
	else
		write(1, "   ", 3);
	if ((i + 1) % 8 == 0)
		write(1, " ", 1);
}

void			ft_ascii(unsigned char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void			ft_hexdump(unsigned char *str, int size, int option)
{
	int		i;
	int		j;

	j = 0;
	while (str[j])
	{
		ft_offset(j, 1);
		write(1, " ", 1);
		i = j - 1;
		while (++i < 16 + j)
			ft_hexa(*(str + i), i, size);
		i = j - 1;
		if (option == 1)
		{
			write(1, " |", 2);
			while (++i < 16 + j && str[i])
			ft_ascii(*(str + i));
			write(1, "|", 1);
		}
		else
			i += 16;
		write(1, "\n", 1);
		j += 16;
	}
	ft_offset(j, 1);
	write(1, "\n", 1);
	free(str);
}

int				ft_file_size(char *filename)
{
	char	buffer;
	int		file_desc;
	int		size;

	size = 0;
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		write(2, "ft_hexdump: ", 12);
		write(2, filename, ft_strlen(filename));
		write(2, ": No such file or directory\n", 28);
		write(2, "ft_hexdump: ", 12);
		write(2, filename, ft_strlen(filename));
		write(2, ": Bad file descriptor\n", 22);
	}
	else
		while (read(file_desc, &buffer, 1))
			++size;
	close(file_desc);
	return (size);
}

unsigned char	*ft_copy_input(char *filename, int size)
{
	unsigned char	buffer;
	unsigned char	*str;
	int				file_desc;
	int				i;

	i = 0;
	str = malloc(sizeof(unsigned char) * size + 1);
	file_desc = open(filename, O_RDONLY);
	while (read(file_desc, &buffer, 1))
		str[i++] = buffer;
	str[i] = '\0';
	close(file_desc);
	return (str);
}

int				ft_c_option(int argc, char **argv)
{
	unsigned char	*str;
	int				i;
	int				size;

	i = 2;
	while (i < argc)
	{
			size = ft_file_size(argv[i]);
			str = ft_copy_input(argv[i], size);
			ft_hexdump(str, size, 1);
			i++;
	}
	//size = ft_file_size(argv[i])
	return (0);
}

int				ft_classic(int argc, char **argv)
{
	unsigned char	*str;
	int		i;
	int		size;

	i = 1;
	while (i < argc)
	{
		size = ft_file_size(argv[i]);
		str = ft_copy_input(argv[i], size);
		ft_hexdump(str, size, 0);
		i++;
	}
	return (0);
}

int				main(int argc, char **argv)
{
	if (argv[1][0] == '-' && argv[1][1] == 'C')
		ft_c_option(argc, argv);
	else
		ft_classic(argc, argv);
	return (0);
}
