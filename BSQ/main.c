/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:38:57 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 11:50:35 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int		i;
	int		*lines;
	char	*params;
	int		*root;

	lines = malloc(sizeof(int) * 2);
	root = malloc(sizeof(int) * 3);
	params = malloc(sizeof(char) * 3);
	i = 1;
	if (argc == 1)
	{
		ft_bsqstdin(lines, params, root);
	}
	while (i < argc)
	{
		ft_bsq(argv[i], lines, params, root);
		if (i != argc - 1)
			write(1, "\n", 1);
		i++;
	}
}

void	ft_bsqstdin(int *lines, char *params, int *root)
{
	int		fd;
	char	buffer[28880];
	int		rd;

	fd = open("buffer", O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | O_NOFOLLOW);
	rd = read(0, buffer, 28880);
	while (rd != 0)
	{
		write(fd, buffer, rd);
		rd = read(0, buffer, 28880);
	}
	close(fd);
	ft_bsq("buffer", lines, params, root);
}

void	ft_bsq(char *argv, int *lines, char *params, int *root)
{
	int		fd;
	t_point	**map;

	fd = open(argv, O_RDWR);
	if (fd != -1)
	{
		f_readparams(fd, &lines[0], params);
		if (lines[0] != 0)
		{
			map = malloc(sizeof(t_point*) * lines[0]);
			lines[1] = size_line(argv);
			if (checkfile(argv, lines) == 1)
			{
				f_record(map, lines, fd, params);
				ft_bsq2(lines, params, root, map);
			}
			else
				write(2, "map error\n", 10);
			free(map);
			close(fd);
			return ;
		}
	}
	write(2, "map error\n", 10);
}

void	ft_bsq2(int *lines, char *params, int *root, t_point **map)
{
	f_countfreerows(map, lines[0], lines[1]);
	f_countfreecolumns(map, lines[0], lines[1]);
	f_findsquare(map, lines[0], lines[1], root);
	f_tagsquare(map, root);
	f_printmap(map, lines[0], lines[1], params);
}
