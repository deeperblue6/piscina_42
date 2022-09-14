/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:38:35 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 03:46:57 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int	ft_strlen(char *str);

int	ft_isprintable(char c);

void	ft_membittohex(unsigned int nb);

void	ft_mem_bitwise(char *str);

void	ft_print_substring_not_formated(char *str, int size);

void	ft_print_substring_hex_formated(char *str, int size);

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*str;
	int	len;

	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	len = ft_strlen(str);
	ft_print_memory(str, len);
	return (0);
}
