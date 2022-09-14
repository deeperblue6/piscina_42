/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:04:02 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/09 00:05:20 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "gdfg re1321";
	char	str2[] = "9876586582";
	char 	str3[] = "";

	printf("El string 1 es: %s\n", str1);
	printf("El resultado es: %i\n\n", ft_str_is_numeric(str1));

	printf("El string 2 es: %s\n", str2);
	printf("El resultado es: %i\n\n", ft_str_is_numeric(str2));

	printf("El string 3 es: %s\n", str3);
	printf("El resultado es: %i\n\n", ft_str_is_numeric(str3));
}*/
