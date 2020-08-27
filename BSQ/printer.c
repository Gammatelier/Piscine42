/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:38:57 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 10:54:37 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	f_printmap(t_point **map, int lines, int sizeline, char *params)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (x < lines)
	{
		while (y < sizeline)
		{
			if (map[x][y].state == 1)
				write(1, &params[0], 1);
			if (map[x][y].state == 0)
				write(1, &params[1], 1);
			if (map[x][y].state == 2)
				write(1, &params[2], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
		y = 0;
	}
}
