/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 19:49:06 by dhers             #+#    #+#             */
/*   Updated: 2020/08/13 14:23:19 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *base);
int		ft_begin(char *str, int *help);
int		ft_atoi_base(char *str, char *base);

int		main()
{
	char *str;
	char *base;
	int help[2];

	str = "     -+-+11e01ak89";
	base = "0123456789abcdef";
	ft_begin(str, &help[0]);
	printf("Nous sommes dans une base %d et le signe est %d\n", ft_strlen(base), help[0]);
	printf("%d est resultat de %s dans base %s\n", ft_atoi_base(str, base), str, base);
	return (0);
}
