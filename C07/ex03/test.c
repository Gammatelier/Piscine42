/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:54:30 by dhers             #+#    #+#             */
/*   Updated: 2020/08/20 11:15:30 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep);


int		main(int argc, char **argv)
{
/*int main()
{
int size = 5;
char **tab = 0;
tab[0] = "This";
tab[1] = "is";
tab[2] = "a";
tab[3] = "cell";
tab[4] = "array";

	char *str;
	str = ft_strjoin(size, tab, " | ");
	printf("%s\n", str);*/
	printf("%s\n", ft_strjoin(argc -1, argv +1, " et "));
	return (0);
}
