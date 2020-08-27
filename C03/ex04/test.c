/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:06:24 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 11:30:53 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char source[] = "Toto est content, TotoTatoti ne l'est pas";
	char to_find[] = "";
	char	*n;
	char	*m;
	n = strstr(source, to_find);
	m = ft_strstr(source, to_find);
	printf("%s\n", m);
	printf("%s\n", n);
}
