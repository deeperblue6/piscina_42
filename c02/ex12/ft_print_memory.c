/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:38:35 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 03:47:40 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_isprintable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_membittohex(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[nb / 16]);
	ft_putchar(base[nb % 16]);
}

void	ft_mem_bitwise(char *str)
{
	int	len;

	len = sizeof(str);
	while (len > 0)
		ft_membittohex((unsigned int)(str) >> --len * 8 & 0xff);
}

void	ft_print_substring_not_formated(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size && str[i] != '\0')
	{
		if (ft_isprintable(str[i]))
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	ft_print_substring_hex_formated(char *str, int size)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (i < size)
	{
		while (p < 2)
		{
			ft_membittohex((unsigned int)(str[i]));
			p++;
			i++;
		}
		p = 0;
		ft_putchar(' ');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!size)
		return (0);
	while (i < size)
	{		
		ft_mem_bitwise(addr + i);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_substring_hex_formated(addr + i, 16);
		ft_print_substring_not_formated(addr + i, 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
