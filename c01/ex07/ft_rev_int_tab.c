/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:23:17 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:59:55 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_put_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		printf("%i, ", tab[i]);
		//write(1, &tab[i] + "0", 1);   *** NO FUNCIONA ***
		i++;
	}
	printf("%i\n", tab[size - 1]);
}

int	ft_tablen(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void 	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	bkup;

	i = 0;
	while (i <= (size / 2))
	{
		bkup = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = bkup;
		size--;
		i++;
	}
}
