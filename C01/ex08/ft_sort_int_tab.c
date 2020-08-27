/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:38:44 by dhers             #+#    #+#             */
/*   Updated: 2020/08/08 15:42:19 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int pos;
	int current;
	int temp;

	pos = 1;
	current = 0;
	while (current <= size - 1)
	{
		while (pos <= size - 1)
		{
			if (tab[current] > tab[pos])
			{
				temp = tab[current];
				tab[current] = tab[pos];
				tab[pos] = temp;
			}
			pos++;
		}
		current++;
		pos = current + 1;
	}
}
