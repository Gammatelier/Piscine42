/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:38:57 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 12:39:56 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		size_line(char *filepath)
{
	int		fd;
	char	*buff;
	char	buf;
	int		size;
	int		rd;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		return (-1);
	buff = malloc(sizeof(char) * 1);
	rd = read(fd, buff, 1);
	while (*buff != '\n' && rd)
		rd = read(fd, buff, 1);
	buf = 0;
	size = 1;
	if (!read(fd, &buf, 1))
		return (-1);
	while (buf != '\n' && rd)
		rd = reader_size(fd, &buf, &size);
	size--;
	close(fd);
	free(buff);
	return (size);
}

int		reader_size(int fd, char *buf, int *size)
{
	int rd;

	rd = read(fd, buf, 1);
	*size = *size + 1;
	return (rd);
}

int		checkfile2(int *lines, char *par, int *count, int fd)
{
	if (fd == -1)
		return (0);
	count[0] = lines[0];
	while (count[0] >= 1)
	{
		read(fd, &par[0], 1);
		count[0] /= 10;
	}
	read(fd, &par[1], 1);
	read(fd, &par[2], 1);
	read(fd, &par[0], 1);
	if (par[0] < 32 || par[0] > 126 || par[1] < 32 || par[1] > 126 ||
		par[2] < 32 || par[2] > 126 || par[0] == par[1] || par[0] == par[2]
		|| par[1] == par[2])
		return (0);
	read(fd, &par[0], 1);
	if (par[0] != '\n')
		return (0);
	return (1);
}

int		checkfile(char *filepath, int *lines)
{
	int		fd;
	char	pa[3];
	int		count[3];

	f_count(count);
	fd = open(filepath, O_RDONLY);
	if (checkfile2(lines, pa, count, fd) == 0 || lines[1] == -1)
		return (0);
	while (count[1] < lines[0])
	{
		while (count[2] < lines[1])
		{
			if (!read(fd, &pa[0], 1) || (pa[0] != pa[1] && pa[0] != pa[2]))
				return (0);
			count[2] += 1;
		}
		if (read(fd, &pa[0], 1) && pa[0] != '\n')
			return (0);
		count[2] = 0;
		count[1] += 1;
	}
	if (read(fd, &pa[0], 1))
		return (0);
	return (1);
}
