/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:19:26 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:28:48 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	//int	cociente;
	//int	resto;
	int	*pt_a;
	int	*pt_b;

	a = 25;
	b = 10;
	pt_a = &a;
	pt_b = &b;

	//ft_ultimate_div_mod(pt_a, pt_b);

	printf("****************************************************\n");
	printf("\n");
	printf("  EL NUMERO A ANTES DE LA FUNCION ES:  %i\n", a);
	printf("\n");
	printf("****************************************************\n");	
	printf("\n");
	printf("  EL NUMERO B ANTES DE LA FUNCION ES:  %i\n", b);	
	printf("\n");
	ft_ultimate_div_mod(pt_a, pt_b);
	printf("****************************************************\n");	
	printf("\n");
	printf("  EL NUMERO A DESPUES DE LA FUNCION ES EL COCIENTE :  %i\n", a);	
	printf("\n");
	printf("****************************************************\n");	
	printf("\n");
	printf("  EL NUMERO B DESPUES DE LA FUNCION ES EL RESTO:  %i\n", b);	
	printf("\n");
	printf("****************************************************\n");	
}
