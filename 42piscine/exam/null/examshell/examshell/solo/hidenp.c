int		hidenp(const char *hidden, const char *str)
{
	while (*str)
	{
		if (*hidden == *str)
			hidden++;
		str++;
	}
	if (*hidden == '\0')
		return (1)
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		if (hidenp(av[1], av[2])
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
		return (0);
	}
	else
		write(1, "\n", 1);
	return (0);
}
