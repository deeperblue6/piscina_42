/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 01:23:44 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:25:13 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	cociente;
	int	resto;
	int	*div;
	int	*mod;

	a = 25;
	b = 5;
	div = &cociente;
	mod = &resto;


	ft_div_mod(a, b, div, mod);

	printf("*******************************************************\n");
	printf("\n");
	printf("                    EL NUMERO A ES:\n");
	printf("                         %i\n", a);
	printf("\n");
	printf("*******************************************************\n");
	printf("\n");
	printf("                    EL NUMERO B ES:\n");
	printf("                         %i\n", b);
	printf("\n");
	printf("*******************************************************\n");
	printf("\n");
	printf("              EL COCIENTE DE A ENTRE B ES:\n");
	printf("                         %d\n", *div);
	printf("\n");
	printf("*******************************************************\n");
	printf("\n");
	printf("	       EL MODULO DE A ENTRE B ES:\n");
	printf("                         %d\n", *mod);
	printf("\n");
	printf("*******************************************************\n");
	printf("\n");

	return (0);
}
