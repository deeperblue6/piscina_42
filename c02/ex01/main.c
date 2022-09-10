/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:58:00 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/10 05:04:46 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src1[] = "supercalifragilistico";
	char	dest1[10];
	char	src2[] = "supercalifragilistico";
	char	dest2[10];
	char	src3[] = "supercalifra";
	char	dest3[15];
	char	src4[] = "es Ivan y tengo 41 años";
	char	dest4[40];


	printf("\n\tString 1: \n");
	printf("\t\t%s \n", src1);
	printf("\t\tLongitud = %i\n\n", ft_strlen(src1));
	printf("\tString 2: \n");
	printf("\t\t%s \n", src2);
	printf("\t\tLongitud = %i\n\n", ft_strlen(src2));
	printf("\tString 3: \n");
	printf("\t\t%s \n", src3);
	printf("\t\tLongitud = %i\n\n", ft_strlen(src3));
	printf("\tString 4: \n");
	printf("\t\t%s \n", src4);
	printf("\t\tLongitud = %i\n\n", ft_strlen(src4));

	ft_strncpy(dest1, src1, 7);
	ft_strncpy(dest2, src2, 7);
	ft_strncpy(dest3, src3, 6);
	ft_strncpy(dest4, src4, 12);

	printf("\n\tString 1: \n");
	printf("\t\t%s \n", dest1);
	printf("\t\tLongitud = %i\n\n", ft_strlen(dest1));

	printf("\n\tString 2: \n");
	printf("\t\t%s \n", dest2);
	printf("\t\tLongitud = %i\n\n", ft_strlen(dest2));
	
	printf("\n\tString 3: \n");
	printf("\t\t%s \n", dest3);
	printf("\t\tLongitud = %i\n\n", ft_strlen(dest3));


	printf("\n\tString 3: \n");
	printf("\t\t%s \n", dest3);
	printf("\t\tLongitud = %i\n\n", ft_strlen(dest3));
	
	printf("\n\tString 3: \n");
	printf("\t\t%s \n", dest3);
	printf("\t\tLongitud = %i\n\n", ft_strlen(dest3));
	
	printf("\n\tString 4: \n");
	printf("\t\t%s \n", dest4);
	printf("\t\tLongitud = %i\n\n", ft_strlen(dest4));
	
	return (0);
}
