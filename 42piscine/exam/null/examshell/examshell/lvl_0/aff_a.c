#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		found;

	i = 0;
	found = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
			found = 1;
		i++;
	}
	if (found)
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
