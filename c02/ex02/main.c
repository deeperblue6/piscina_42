/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:03:32 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 20:03:40 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[] = "ASDGHhgfdgferer";
	char	str2[] = "dskfFSDE3432efF";
	char	str3[] = "";

	printf("\n");
	printf("\tFUNCION: ft_str_is_alpha()\n\n");
	printf("\tLa funcion devuelve 1 si el String pasado como parametro\n");
	printf("\tcontiene solo caracteres alfabeticos o esta vacio\n");
	printf("\tLa funcion devuelve 0 si el String pasado como parametro\n");
	printf("\tcontiene caracteres no alfabeticos\n\n");
	printf("\tEl string:  %s\n", str1);
	printf("\tDevuelve:  %i\n", ft_str_is_alpha(str1));
	printf("\tEl string:  %s\n", str2);
	printf("\tDevuelve:  %i\n", ft_str_is_alpha(str2));
	printf("\tEl string:  %s\n", str3);
	printf("\tDevuelve:  %i\n", ft_str_is_alpha(str3));
	return (0);
}
