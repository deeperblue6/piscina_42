/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:39:19 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/07/14 16:37:58 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	unidad;
	char	decena;
	char	centena;

	centena = '0';
	while (centena <= '7')
	{
		decena = centena + 1;
		while (decena <= '8')
		{
			unidad = decena + 1;
			while (unidad <= '9')
			{
				write(1, &centena, 1);
				write(1, &decena, 1);
				write(1, &unidad, 1);
				if (centena != '7')
					write(1, ", ", 2);
				unidad++;
			}
			decena++;
		}
		centena++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return(0);
}*/
