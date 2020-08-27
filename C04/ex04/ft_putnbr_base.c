* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:05:28 by dhers             #+#    #+#             */
/*   Updated: 2020/08/16 14:35:42 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_base_calculus(unsigned long number, unsigned int basenbr, char *base)
{
	if (number > basenbr - 1) // basenbr - 1 car si base 10, on check si superieur a 9.  si base binaire (2) on check si superieur a 1
	{
		ft_base_calculus(number / basenbr, basenbr, base);
	}
	write(1, &base[number % basenbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int number;
	unsigned int basenbr;

	basenbr = ft_strlen(base);
	if (basenbr == 0 || basenbr == 1)
		return ;
	if (nbr < 0)
	{
		number = -nbr;
		write(1, "-", 1);
	}
	else
		number = nbr;
	ft_base_calculus(number, basenbr, base);
}
