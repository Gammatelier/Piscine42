/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:52:54 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 21:34:43 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	address_hexa(unsigned long addr, int x)
{
	char *base;

	base = "0123456789abcdef";
	if (x < 16)
	{
		x++;
		address_hexa(addr / 16, x);
	}
	write(1, &base[addr % 16], 1);
}

void	printable(unsigned char a)
{
	if (a < 32 || a > 127)
		write(1, ".", 1);
	else
		write(1, &a, 1);
}

void	convert_to_hexa(unsigned char a)
{
	char *base;

	base = "0123456789abcdef";
	write(1, &base[a / 16], 1);
	write(1, &base[a % 16], 1);
}

void	print_small(void *addr, int count, int i, int size)
{
	while (count < 16 && i < size)
	{
		if ((((unsigned char*)addr)[i - 1] == ((unsigned char*)addr)[i]) &&
				(((unsigned char*)addr)[i] == 32))
		{
			i++;
			count++;
		}
		else
		{
			printable(((unsigned char*)addr)[i]);
			count++;
			i++;
		}
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				count;

	i = 0;
	while (i < size)
	{
		address_hexa((unsigned long)(addr + i), 1);
		write(1, " :", 2);
		count = 0;
		while (count < 16 && i < size)
		{
			convert_to_hexa(((unsigned char*)addr)[i]);
			if (count % 2 == 1)
				write(1, " ", 1);
			count++;
			i++;
		}
		if (count < 16)
			write(1, "                          ", 16 - count);
		i -= count;
		print_small(addr, 0, i, size);
		i += 16;
	}
	return (addr);
}

/////////////////////////////////////////
Sadly, doesn't work
