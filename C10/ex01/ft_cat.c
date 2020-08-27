/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:03:48 by dhers             #+#    #+#             */
/*   Updated: 2020/08/25 11:01:27 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		ft_strlen(char *str);
void	ft_display_file(int file_desc);
void	ft_putstr(char *str);
void	ft_read_keyboard(void);
void	ft_errno(char *program_name, char *filename, int is_directory);

int		main(int argc, char **argv)
{
	int	file_desc;
	int	i;
	int	errno;

	i = 1;
	if (argc == 1)
		ft_read_keyboard();
	while (i < argc)
	{
		errno = 0;
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_read_keyboard();
		else if ((file_desc = open(argv[i], O_DIRECTORY)) == -1)
		{
			if ((file_desc = open(argv[i], O_RDONLY)) == -1)
				ft_errno(argv[0], argv[i], 0);
			else
				ft_display_file(file_desc);
		}
		else
			ft_errno(argv[0], argv[i], 1);
		i++;
	}
}
