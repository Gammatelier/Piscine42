/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 15:35:54 by dhers             #+#    #+#             */
/*   Updated: 2020/08/15 15:20:03 by dhers            ###   ########.fr       */
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
		while (nb >= x * x)
		{
			if (nb % x == 0)
				return (0);
			x += 2;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2).  //because first prime for negative number is 2
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
