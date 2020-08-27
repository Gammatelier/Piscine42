/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:39:22 by dhers             #+#    #+#             */
/*   Updated: 2020/08/13 15:48:44 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (power > 0)
		{
			i = i * nb;
			power--;
		}
	return (i);
}
