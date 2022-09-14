#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'A' || str[i] >= 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str1[] = "fdjGDFG$%";
	char	str2[] = "GHHTRYJYR";
	char	str3[] = "";

	printf("El string 1 e: %s\n", str1);
	printf("Devuelve: %i\n\n", ft_str_is_uppercase(str1));

	printf("El string 2 e: %s\n", str2);
	printf("Devuelve: %i\n\n", ft_str_is_uppercase(str2));

	printf("El string 3 e: %s\n", str3);
	printf("Devuelve: %i\n\n", ft_str_is_uppercase(str3));
}
