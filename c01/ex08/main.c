/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 02:01:34 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 02:02:47 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_tablen(int *tab);

void	ft_putarray(int *tab, int size);
 
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	vector[] = {3286,10,2,1001,35,34,1,501,406,7,81,'\0'};
	int	*tab;
	int	size;

	tab = vector;
	size = ft_tablen(tab);
	printf("\n%i\n\n", ft_tablen(tab));
	ft_putarray(tab, size);
	ft_sort_int_tab(tab, size);
	ft_putarray(tab, size);

	return (0);
}
