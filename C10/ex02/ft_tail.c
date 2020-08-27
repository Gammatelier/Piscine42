/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:01:38 by dhers             #+#    #+#             */
/*   Updated: 2020/08/26 07:28:34 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		main(int argc, char **argv)
{
	int	file_desc;
	int	i;
	int	size;

	i = 3;
	if (ft_bad_arguments(argc, argv[0], argv[2]) == 0)
		return (0);
	size = ft_read_size(argv[2]);
	while (i < argc)
	{
		if ((file_desc = open(argv[i], O_DIRECTORY)) == -1)
		{
			if (((file_desc = open(argv[i], O_RDONLY)) == -1))
				ft_errno(argv[0], argv[i]);
			else
				ft_tail_bytes(argv[i], size, argc);
		}
		else
			ft_header(argv[i], i);
		i++;
	}
}
