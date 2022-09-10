/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:38:47 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/08 16:40:26 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
	{
		number = nb;
	}
	if ( number > 9)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}

/*int	main(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num1 = -2147483648;
	num2 = -158;
	num3 = 0;
	num4 = 2147125456;

	ft_putnbr(num1);
	write(1, "\n", 1);
	ft_putnbr(num2);
	write(1, "\n", 1);
	ft_putnbr(num3);
	write(1, "\n", 1);
	ft_putnbr(num4);
	write(1, "\n", 1);
	return (0);
}*/
