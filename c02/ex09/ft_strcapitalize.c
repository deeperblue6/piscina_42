#include <unistd.h>
#include <stdio.h>

char	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str[0] = ft_to_upper(str[0]);
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i - 1]) && ft_is_alpha(str[i]))
			str[i] = ft_to_upper(str[i]);
		else 
			str[i] = ft_to_lower(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("--------------------------------------------------------------\n");
	printf("\n");
	printf("\tEl String sin modificar es: \n\t\t%s\n", str);
	printf("\n");
	printf("--------------------------------------------------------------\n");
	printf("\n");
	printf("\tEl String modificado es: \n\t\t%s\n", ft_strcapitalize(str));
	printf("\n");
	printf("--------------------------------------------------------------\n");


}
