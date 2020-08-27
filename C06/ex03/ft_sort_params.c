/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 14:00:25 by dhers             #+#    #+#             */
/*   Updated: 2020/08/14 14:05:03 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_tri(char *base[], int length)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (ft_strcmp(base[i], base[j]) > 0)
			{
				swap = base[i];
				base[i] = base[j];
				base[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	ft_tri(argv, argc);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
