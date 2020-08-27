/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 15:11:36 by dhers             #+#    #+#             */
/*   Updated: 2020/08/15 12:58:21 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int x;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	else if ((nb % 2) == 0)
		return (0);
	else
		x = 3;
	{
		while (x < 46341) // 46341 because squre root of int max is below 46341
		{
			if (nb % x == 0)
				return (0);
			x += 2;
		}
	}
	return (1);
}
