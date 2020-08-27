/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 16:27:06 by dhers             #+#    #+#             */
/*   Updated: 2020/08/06 17:54:34 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_2_chars(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_2_numbers_2_4_chars(int a, int b)
{
	char dec;
	char unit;

	dec = a / 10 + 48;
	unit = a % 10 + 48;
	ft_print_2_chars(dec, unit);
	write(1, " ", 1);
	dec = b / 10 + 48;
	unit = b % 10 + 48;
	ft_print_2_chars(dec, unit);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	ft_print_2_numbers_2_4_chars(a, b);
	b++;
	while (a <= 98)
	{
		while (b <= 99)
		{
			write(1, ", ", 2);
			ft_print_2_numbers_2_4_chars(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
