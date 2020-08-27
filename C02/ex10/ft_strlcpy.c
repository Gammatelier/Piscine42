/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:08:11 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 12:02:34 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	else
	{
		while (i < size - 1 && src[i] != '\0')  // size - 1 because you need to put '\0' at the end of string
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i = 0;
		while (src[i] != '\0')
			i++;
		return (i);
	}
}
