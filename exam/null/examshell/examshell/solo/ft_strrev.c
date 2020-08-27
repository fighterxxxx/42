int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int size;
	char c;

	i = 0;
	size = ft_strlen(str) - 1;
	while (i < (size + 1) / 2)
	{
		c = str[i];
		str[i] = str[size - i];
		str[size - i] = c;
		i++;
	}
	return (str);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strrev(av[1]));
	return (0);
}
