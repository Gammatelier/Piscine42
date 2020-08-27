/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 19:31:53 by jode-vri          #+#    #+#             */
/*   Updated: 2020/08/15 19:31:55 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_row_diff(int solution[4][4])
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (solution[i][j] == 0)
				return (1);
			k = j + 1;
			while (k < 4)
			{
				if (solution[i][j] == solution[i][k])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_is_col_diff(int solution[4][4])
{
	int		i;
	int		j;
	int		k;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (solution[i][j] == 0)
				return (1);
			k = i + 1;
			while (k < 4)
			{
				if (solution[i][j] == solution[k][j])
					return (0);
				k++;
			}
			i++;
		}
		j++;
	}
	return (1);
}
