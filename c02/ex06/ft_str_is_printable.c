#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str1[] = "dfjkhfig67\n868Çç";
	char	str2[] = "gfdgklFDGS $423423";
	char	str3[] = "";

	printf("-------------------------------------------------------");
	
	printf("\tEl string 1 es: %s\n", str1);
	printf("\t\tDevuelve: %i\n", ft_str_is_printable(str1));

	printf("-------------------------------------------------------");

	printf("\tEl string 2 es: %s\n", str2);
	printf("\t\tDevuelve: %i\n", ft_str_is_printable(str2));

	printf("-------------------------------------------------------");

	printf("\tEl string 3 es: %s\n", str3);
	printf("\t\tDevuelve: %i\n", ft_str_is_printable(str3));

	printf("-------------------------------------------------------");
}
