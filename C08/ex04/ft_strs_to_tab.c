/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:21:50 by dhers             #+#    #+#             */
/*   Updated: 2020/08/20 20:04:49 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (copy == NULL)
		return (copy);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (tab);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

//////////////////////////////////////////
ft_stock_str.h

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
}             t_stock_str;
