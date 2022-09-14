/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 04:35:18 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 04:37:02 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Soy un string que va ser copiado";
	char	dst[] = "Yo soy el string donde se va a copiar";

	printf("%s\n", src);
	printf("%s\n", dst);
	ft_strcpy(dst, src);
	printf("%s\n", src);
	printf("%s\n", dst);
	return (0);
}
