/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:09:03 by dhers             #+#    #+#             */
/*   Updated: 2020/08/13 13:33:05 by dhers            ###   ########.fr       */
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
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i] || base[j] == ' ' || base[j] == '\n' ||
			base[j] == '\t' || base[j] == '\v' || base[j] == '\f' ||
			base[j] == '\r' || base[j] == '+' || base[j] == '-')
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
	int taille;

	i = 0;
	s = 1;
	taille = 0;
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

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int number;
	int basenbr;
	int help[2];

	number = 0;
	basenbr = ft_strlen(base);
	if (basenbr == 0 || basenbr == 1)
		return (0);
	else
	{
		ft_begin(str, &help[0]);
		i = help[1];
		while (ft_base_check(str, i, base) > -1)
		{
			number = number * basenbr + ft_base_check(str, i, base);
			i++;
		}
		return (help[0] * number);
	}
	return (0);
}
