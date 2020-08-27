************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 10:26:36 by dhers             #+#    #+#             */
/*   Updated: 2020/08/12 10:36:30 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char source[] = "toto rest content";
	char source2[] = "toto est content";
	int		n;
	int		m;
	n = strncmp(source2, source, 9);
	m = ft_strncmp(source2, source, 9);
	printf("%i\n", n);

	printf("%i\n", m);
}
