/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:07:46 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 17:56:22 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char *a)
{
	unsigned int i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_str_len(src));
	else if (ft_str_len(dest) >= size)
		return (ft_str_len(src) + size);
	else
	{
		i = ft_str_len(dest);
		while (src[j] != '\0' && j < size - i - 1)
		{
			dest[j + i] = src[j];
			j++;
		}
		dest[j + i] = '\0';
		return (i + ft_str_len(src));
	}
	return (0);
}
