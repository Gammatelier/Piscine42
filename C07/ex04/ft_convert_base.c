/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:03:13 by dhers             #+#    #+#             */
/*   Updated: 2020/08/18 12:06:25 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '\n' ||
		base[i] == '\t' || base[i] == '\v' || base[i] == '\f' ||
		base[i] == '\r' || base[i] == '+' || base[i] == '-')
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

int		ft_base_check(char *str, int i, char *base)
{
	int x;

	x = 0;
	while (base[x] != '\0')
	{
		if (base[x] == str[i])
			return (x);
		x++;
	}
	return (-1);
}

void	ft_begin(char *str, int *help)
{
	int i;
	int s;

	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	help[0] = s;
	help[1] = i;
}

int		ft_from_base(char *nbr, char *base_from)
{
	int i;
	int number;
	int basenbr;
	int help[2];

	number = 0;
	basenbr = ft_strlen(base_from);
	ft_begin(nbr, &help[0]);
	i = help[1];
	while (ft_base_check(nbr, i, base_from) > -1)
	{
		number = number * basenbr + ft_base_check(nbr, i, base_from);
		i++;
	}
	return (help[0] * number);
}
