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
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr(argv[1]);
	return (0);
}

