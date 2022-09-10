/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:49:18 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:01:46 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nb;

	nb = 21;
	printf("\n");
	printf("\tEl numero antes de ejecutar la funcion es: %i\n", nb);
	ft_ft(&nb);
	printf("\tEl numero despues de ejecutar la funcion es: %i\n", nb);
	return (0);
}
