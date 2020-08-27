#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'a' && str[i] < 'm')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(str[i] - 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i] - 13);
		else 
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	(void)argv;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else 
		ft_rotone(argv[1]);
}
