/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 01:33:11 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 01:33:39 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char		*string;
	unsigned int	len;

	string = "Tengo 19 caracteres";
	len = ft_strlen(string);
	printf("LA CADENA TIENE %i CARACTERES", len);
	return (0);
}
