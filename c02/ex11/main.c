/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:49:28 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 03:50:35 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

char	ft_putchar(char c);

char	ft_putchar_non_printable(char c);

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[] = "Coucou\ntu v\tas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
