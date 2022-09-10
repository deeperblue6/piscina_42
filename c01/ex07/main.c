/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:23:17 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:59:51 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_put_array(int *tab, int size);

int	ft_tablen(int *tab);

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int 	vector[] = {1,2,3,4,5,6,7,8,'\0'};
	int	*tab;
	int	size;

	tab = vector;
	size = ft_tablen(tab);

	printf("La variable size vale: %i\n", size);
	ft_put_array(tab, size);

	ft_rev_int_tab(tab, size);

	ft_put_array(tab, size);

}
