#include <unistd.h>

static int	ft_hidenp(const char *hiden, const char *str)
{
	while (*str != '\0')
	{
		if (*hiden == *str)
			hiden++;
		str++;
	}
	if (*hiden == '\0')
		return (1);
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_hidenp(argv[1], argv[2]))
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
	return (0);
}
