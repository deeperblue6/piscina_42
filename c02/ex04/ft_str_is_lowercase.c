#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str1[] = "ADG$$·%5435sdfg";
	char str2[] = "jfkldgjkrjegij";
	char str3[] = "";

	printf("El string 1 es: %s\n", str1);
	printf("El resultado es: %d\n\n", ft_str_is_lowercase(str1));

	printf("El string 2 es: %s\n", str2);
	printf("El resultado es: %d\n\n", ft_str_is_lowercase(str2));

	printf("El string 3 es: %s\n", str3);
	printf("El resultado es: %d\n\n", ft_str_is_lowercase(str3));



}
