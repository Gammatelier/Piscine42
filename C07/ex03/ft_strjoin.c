/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:21:23 by dhers             #+#    #+#             */
/*   Updated: 2020/08/20 11:44:47 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_string_size(char **strs, int size)
{
	int i;
	int strs_size;

	i = 0;
	strs_size = 0;
	while (i < size)
	{
		strs_size += ft_strlen(strs[i]);
		i++;
	}
	return (strs_size);
}

char	*ft_size_zero(char *dest)
{
	dest = malloc(sizeof(char) * 1);
	dest[0] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	dest = NULL;
	if (size == 0)
		return (ft_size_zero(dest));
	dest = malloc(sizeof(char) * (ft_string_size(strs, size) +
			(ft_strlen(sep) * (size - 1)) + 1));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[count++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			dest[count++] = sep[j++];
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
