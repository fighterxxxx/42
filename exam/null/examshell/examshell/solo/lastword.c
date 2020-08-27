#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	lastword(char *str)
{
	int i;
	char *last;

	i = 0;
	last = &str[i];
	while (str[i])
	{
		if (!(str[i] >= 33 && str[i] <= 126))
		{
			if (str[i + 1] >= 33 && str[i + 1] <= 126)
				last = &str[i];
		}
		i++;
	}
	if (last)
		ft_putstr(last);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	else
		lastword(av[1]);
	ft_putstr("\n");
	return (0);
}
