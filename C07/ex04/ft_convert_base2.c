/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:25:26 by dhers             #+#    #+#             */
/*   Updated: 2020/08/20 15:50:57 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *base);
int		ft_base_check(char *str, int i, char *base);
void	ft_begin(char *str, int *help);
int		ft_from_base(char *nbr, char *base_from);

char	*ft_reverse(char *new_str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = 0;
	while (new_str[size] != '\0')
		size++;
	while (i < size / 2)
	{
		temp = new_str[i];
		new_str[i] = new_str[size - 1 - i];
		new_str[size - 1 - i] = temp;
		++i;
	}
	return (new_str);
}

char	*ft_to_base(long int intermediate_nbr, char *base_to, char *new_str)
{
	long int	number;
	long int	basenbr;
	int			i;

	number = 0;
	basenbr = ft_strlen(base_to);
	if (intermediate_nbr < 0)
		number = -intermediate_nbr;
	else
		number = intermediate_nbr;
	i = 0;
	while (number > basenbr - 1)
	{
		new_str[i] = base_to[number % basenbr];
		number = number / basenbr;
		i++;
	}
	new_str[i++] = base_to[number];
	if (intermediate_nbr < 0)
		new_str[i++] = '-';
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*new_str;
	long int		intermediate_nbr;

	if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2)
		return (NULL);
	intermediate_nbr = ft_from_base(nbr, base_from);
	new_str = malloc(sizeof(char) * 34);
	ft_to_base(intermediate_nbr, base_to, new_str);
	ft_reverse(new_str);
	return (new_str);
}
