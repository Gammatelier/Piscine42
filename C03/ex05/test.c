/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 10:11:44 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 15:18:35 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char source[] = "toto est content"; //taille de 16
	char dest[50] = "Demain, "; //taille de 8
	char source2[] = "toto est content";
	char dest2[50] = "Demain, ";
	int		a;
	int		b;
	int		c;
	int		x;
	int		y;
	int		z;
	int		d;
	int		w;
	a = strlcat(dest, source, 0);
	x = ft_strlcat(dest2, source2, 0);
	printf("%i - %s\n", a, dest);
	printf("%i - %s\n", x, dest2);
	b = strlcat(dest, source, 8);
	y = ft_strlcat(dest2, source2, 8);
	printf("%i - %s\n", b, dest);
	printf("%i - %s\n", y, dest2);
	c = strlcat(dest, source, 20);
	z = ft_strlcat(dest2, source2, 20);
	printf("%i - %s\n", c, dest);
	printf("%i - %s\n", z, dest2);
	d = strlcat(dest, source, 30);
	w = ft_strlcat(dest2, source2, 30);
	printf("%i - %s\n", d, dest);
	printf("%i - %s\n", w, dest2);
}
