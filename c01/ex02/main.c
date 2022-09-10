/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 01:14:26 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:18:21 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b; 
	int	*pt_a;
	int	*pt_b;

	a = 15;
	b = 22;
	pt_a = &a;
	pt_b = &b;

	printf("\n");
	printf("\t|*****************************************|\n");
	printf("\t|                                         |\n");
	printf("\t|      EL NUMERO A PREVIO AL CAMBIO:      |\n");
	printf("\t|                                         |\n");
	printf("\t|                   %i                    |\n", a);
	printf("\t|                                         |\n");
	printf("\t|      EL NUMERO B PREVIO AL CAMBIO       |\n");
	printf("\t|                                         |\n");
	printf("\t|                   %i                    |\n", b);
	printf("\t|                                         |\n");
	ft_swap(pt_a, pt_b);
	printf("\t|*****************************************|\n");
	printf("\t|                                         |\n");
	printf("\t|       EL NUMERO A TRAS EL CAMBIO        |\n");
	printf("\t|                                         |\n");
	printf("\t|                   %i                    |\n", a);
	printf("\t|                                         |\n");
	printf("\t|       EL NUMERO B TRAS EL CAMBIO        |\n");
	printf("\t|                                         |\n");
	printf("\t|                   %i                    |\n", b);
	printf("\t|                                         |\n");
	printf("\t|*****************************************|\n");

	return (0);
}

