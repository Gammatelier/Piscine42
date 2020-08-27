/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:10:14 by dhers             #+#    #+#             */
/*   Updated: 2020/08/20 15:58:02 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *base);
int		ft_base_check(char *str, int i, char *base);
void	ft_begin(char *str, int *help);
int		ft_from_base(char *nbr, char *base_from);
char	*ft_reverse(char *new_str);
char	ft_to_base(int intermediate_nbr, char *base_to, char *new_str);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	printf("%s\n", ft_convert_base("bonjourtoto", "0123456789abcdefghijklmnopqrstuvwxyz", "0123456789"));
	printf("%s\n", ft_convert_base("     --+++-", "0123456789", "0123456789"));
	printf("%s\n", ft_convert_base("10110100101", "01", "poneyvifp"));
	printf("%s\n", ft_convert_base("10110100101", "01", "0123456789"));
	printf("%s\n", ft_convert_base("   -2147483648", "0123456789", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("1111111111111111111111111111111", "01", "0123456789"));
}
