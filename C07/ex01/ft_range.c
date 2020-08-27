/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:41:00 by dhers             #+#    #+#             */
/*   Updated: 2020/08/18 15:54:38 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		*ft_range(int min, int max)
{
	int				*pointer;
	unsigned int	i;
	unsigned int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	pointer = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		pointer[i] = min;
		min++;
		i++;
	}
	return (pointer);
}
