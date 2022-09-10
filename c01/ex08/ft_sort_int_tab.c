/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:30:08 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 02:03:53 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_tablen(int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}

void	ft_putarray(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		printf("%i, ", tab[i]);
		i++;
	}
	printf("%i\n\n", tab[size - 1]);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	r;
	int	temp;

	i = 0;
	r = 0;
	while (r <= size - 1)
	{
		while (tab[i + 1] != '\0')
		{
			if (tab[i] > tab [i + 1] && tab[i + 1] != '\0')
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			else
			{
				i++;
			}
		}
		i = 0;
		r += 1;
	}
}
