/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 10:38:08 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 10:50:16 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char source[] = "Toto va a la plage";
	char dest[30] = "Demain, ";
	char dest2[30] = "Demain, ";
	char *pointer;
	char *pointer2;
	pointer = strcat(dest, source);
	pointer2 = ft_strcat(dest2, source);
	printf("%s - %s\n", pointer, dest);
	printf("%s - %s\n", pointer2, dest2);
}
