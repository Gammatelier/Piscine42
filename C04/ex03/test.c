/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 17:14:55 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 17:30:24 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int main()
{
	char str1[] = "    --+-+120459";
	//printf("%d\n", atoi(str1));
	printf("%d\n", ft_atoi(str1));
	char str2[] = " -+++-a124ac56";
	//printf("%d\n", atoi(str2));
	printf("%d\n", ft_atoi(str2));
}
