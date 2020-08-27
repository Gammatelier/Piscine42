/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:13:14 by dhers             #+#    #+#             */
/*   Updated: 2020/08/10 20:45:25 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_2_hexa(unsigned char a)
{
	char *base;

	base = "0123456789abcdef";
	write(1, "\\", 1);  // need to be \\ to show a single '\'
	write(1, &base[a / 16], 1);
	write(1, &base[a % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			a = str[i];
			convert_2_hexa(a);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
