/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:56:57 by dhers             #+#    #+#             */
/*   Updated: 2020/08/24 10:21:43 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_display_file(int file_desc)
{
	char buffer;

	while (read(file_desc, &buffer, 1))
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int file_desc;

	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		file_desc = open(argv[1], O_RDONLY);
		if (file_desc == -1)
			write(1, "Cannot read file.\n", 18);
		else
			ft_display_file(file_desc);
	}
	return (0);
}
