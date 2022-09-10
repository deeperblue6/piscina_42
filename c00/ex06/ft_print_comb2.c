/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:38:18 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/08 16:38:30 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_pair;
	int	second_pair;

	first_pair = 0;
	while (first_pair < 100)
	{
		second_pair = first_pair + 1;
		while (second_pair < 100)
		{
			ft_putchar((first_pair / 10) + '0');
			ft_putchar((first_pair % 10) + '0');
			ft_putchar(' ');
			ft_putchar((second_pair / 10) + '0');
			ft_putchar((second_pair % 10) + '0');
			if (first_pair != 98 || second_pair != 99)
				write(1, ", ", 2);
			second_pair++;
		}
		first_pair++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
