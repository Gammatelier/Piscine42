/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:26:36 by dhers             #+#    #+#             */
/*   Updated: 2020/08/18 14:14:34 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_base_check(char *str, int i, char *charset)
{
	int x;

	x = 0;
	while (charset[x] != '\0')
	{
		if (charset[x] == str[i])
			return (0);
		x++;
	}
	return (1);
}

int		ft_word_size(char *str, char *charset)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (ft_base_check(str, i, charset) == 0)
		i++;
	while (ft_base_check(str, i, charset) != 0 && str[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

int		ft_word_count(char *str, char *charset)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (ft_base_check(str, i, charset) == 0)
			i++;
		if (ft_base_check(str, i, charset) != 0 && str[i] != '\0')
			count++;
		while (ft_base_check(str, i, charset) != 0 && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**grid;

	grid = malloc(sizeof(char*) * (ft_word_count(str, charset) + 1));
	if (!str || !grid)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_word_count(str, charset))
	{
		k = 0;
		grid[i] = malloc(sizeof(char) * (ft_word_size(&str[j], charset) + 1));
		while (ft_base_check(str, j, charset) == 0)
			j++;
		while (ft_base_check(str, j, charset) != 0 && str[j] != '\0')
			grid[i][k++] = str[j++];
		grid[i][k] = '\0';
		i++;
	}
	grid[i] = 0;
	return (grid);
}
