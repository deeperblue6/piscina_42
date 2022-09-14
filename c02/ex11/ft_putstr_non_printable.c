/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:49:28 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 03:56:21 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_non_printable(char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	ft_putchar(base[c / 16]);
	write(1, &base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 127))
		{
			ft_putchar_non_printable(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\0');
}
