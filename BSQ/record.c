/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:38:57 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 10:56:33 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	f_countfreerows(t_point **map, int lines, int sizeline)
{
	int		x;
	int		y;
	int		count;

	x = 0;
	y = 0;
	while (x < lines)
	{
		count = 0;
		while (y < sizeline)
		{
			map[x][y].freebr = count;
			if (map[x][y].state == 1)
				count++;
			if (map[x][y].state == 0)
				count = 0;
			y++;
		}
		x++;
		y = 0;
	}
}

void	f_countfreecolumns(t_point **map, int lines, int sizeline)
{
	int		x;
	int		y;
	int		count;

	x = 0;
	y = 0;
	while (y < sizeline)
	{
		count = 0;
		while (x < lines)
		{
			map[x][y].freebc = count;
			if (map[x][y].state == 1)
				count++;
			if (map[x][y].state == 0)
				count = 0;
			x++;
		}
		y++;
		x = 0;
	}
}

void	f_record(t_point **map, int *lines, int fd, char *params)
{
	int			x;
	int			y;
	char		buff;

	x = 0;
	y = 0;
	map[x] = malloc(sizeof(t_point) * lines[1]);
	while (x < lines[0])
	{
		read(fd, &buff, 1);
		if (buff == params[0])
			map[x][y++].state = 1;
		else if (buff == params[1])
			map[x][y++].state = 0;
		else if (buff == '\n')
		{
			x++;
			if (x < lines[0])
				map[x] = malloc(sizeof(t_point) * lines[1]);
			y = 0;
		}
	}
}

int		f_sizetmp(t_point **map, int lines, int sizeline, int *count)
{
	int x;
	int y;
	int sizetmp;

	x = count[0];
	y = count[1];
	sizetmp = count[2];
	if ((x + sizetmp) < lines && (y + sizetmp) < sizeline
		&& map[x + sizetmp][y + sizetmp].state == 1
		&& map[x + sizetmp][y + sizetmp].freebr >= sizetmp
		&& map[x + sizetmp][y + sizetmp].freebc >= sizetmp)
		return (1);
	return (0);
}

int		*f_count(int *count)
{
	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	return (count);
}
