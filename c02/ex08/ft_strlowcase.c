#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - ('A' - 'a');
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "asdaAADVR654&gdfgDFGDFSF43";

	printf("-----------------------------------------------------\n");
	printf("\n");
	printf("\tEl String es: \n\t\t%s\n", str);
	printf("\n");
	printf("-----------------------------------------------------\n");
	printf("\n");
	printf("\tEl String transformado es: \n\t\t%s\n", ft_strlowcase(str));
	printf("\n");
	printf("-----------------------------------------------------\n");
}
