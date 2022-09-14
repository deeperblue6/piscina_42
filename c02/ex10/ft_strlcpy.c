/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:59:42 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 04:00:13 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
unsigned int	fr_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = ft_strlen(scr);
	if 
}
*/

int	main(void)
{
	char	src[] = "Hola soy el String que se va a copiar";
	char	dst[] = "Hola soy el String de destino";

	printf("El estring de origen es: \n %s\n\n", src);
	printf("El resultado de strlcpy es: \n %s", strlcpy(dst, src, 12));
}
