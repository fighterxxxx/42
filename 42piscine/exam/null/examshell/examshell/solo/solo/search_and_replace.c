#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
	ft_putchar(argv[1][i]);
	i++;
	}
	return (0);
}
