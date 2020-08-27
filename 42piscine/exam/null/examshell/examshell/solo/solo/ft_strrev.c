#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i != -1)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
