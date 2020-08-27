/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:38:57 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 10:55:36 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	f_findsquare(t_point **map, int lines, int sizeline, int *root)
{
	int		count[3];

	f_count(count);
	root[2] = 0;
	while (count[0] < lines)
	{
		while (count[1] < sizeline)
		{
			if (f_sizetmp(map, lines, sizeline, count) == 1)
				count[2] += 1;
			else
			{
				if (count[2] > root[2])
				{
					root[0] = count[0];
					root[1] = count[1];
					root[2] = count[2];
				}
				count[2] = 0;
				count[1] += 1;
			}
		}
		count[0] += 1;
		count[1] = 0;
	}
}

void	f_tagsquare(t_point **map, int *root)
{
	int		z;
	int		p;

	z = root[2] - 1;
	p = root[2] - 1;
	while (z >= 0)
	{
		while (p >= 0)
		{
			map[root[0] + z][root[1] + p].state = 2;
			p--;
		}
		z--;
		p = root[2] - 1;
	}
}

void	f_readparams(int fd, int *lines, char *params)
{
	char	buff;

	read(fd, lines, 1);
	*lines = *lines - 48;
	read(fd, &params[0], 1);
	read(fd, &params[1], 1);
	read(fd, &params[2], 1);
	read(fd, &buff, 1);
	while (buff != '\n')
	{
		if (params[0] < 48 || params[0] > 57)
		{
			*lines = 0;
			buff = '\n';
		}
		*lines = (*lines * 10) + (params[0] - 48);
		params[0] = params[1];
		params[1] = params[2];
		params[2] = buff;
		read(fd, &buff, 1);
	}
}
