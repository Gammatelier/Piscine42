/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:04:24 by dhers             #+#    #+#             */
/*   Updated: 2020/08/09 22:03:25 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] < '0' || (str[i] > '9' && str[i] <
						'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
		while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i]
					<= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
	}
	return (str);
}

//////////////////////////

Another solution is to first change all upcase as lowcase
then rewind and just change to upcase first letter of words
