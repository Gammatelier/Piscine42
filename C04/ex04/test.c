/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 19:49:06 by dhers             #+#    #+#             */
/*   Updated: 2020/08/16 14:42:01 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int	nbr, char	*base);

int main()
{
	ft_putnbr_base(1445, "poneyavifip");
	write(1, "\n", 1);
	ft_putnbr_base(1445, "pyoneyvif"); //  expected result is NULL
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789abcdef"); //expected result is 5a5
	write(1, "\n", 1);
	ft_putnbr_base(15, "0123456789abcdef"); // expected result is f
	write(1, "\n", 1);
	ft_putnbr_base(16, "0123456789abcdef"); //expected result is 10
	write(1, "\n", 1);
	ft_putnbr_base(17, "0123456789abcdef"); //expected result is 11
	write(1, "\n", 1);
	ft_putnbr_base(18, "0123456789abcdef"); //expected result is 12
	write(1, "\n", 1);
	ft_putnbr_base(18, "+0123456789abcdef"); //expected result is NULL
	write(1, "\n", 1);
	ft_putnbr_base(185, "01"); //expected result is 10111001
	write(1, "\n", 1);
	ft_putnbr_base(-18, ""); //expected result is NULL
	write(1, "\n", 1);
	ft_putnbr_base(-18, "0"); //expected result is NULL
	write(1, "\n", 1);
	ft_putnbr_base(-18, "0123456789"); //expected result is -18
	write(1, "\n", 1);
}
