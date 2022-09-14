#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	 i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + ('A' - 'a');
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "RTEdsfdsrwR4234,fsdfEWR";

	printf("\n\tEl String es: \n\t\t%s", str);
	printf("\n\tEl String transformado es: \n\t\t%s", ft_strupcase(str));

	return (0);
}
