#include <unistd.h>

int		wdmatch(char *s1, char *s2)
{
	while (*s1)
	{
		while (*s2 && *s2 != *s1)
			s2++;
		if (*s2 != *s1)
			return (0);
		s1++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		if (wdmatch(argv[1], argv[2]))
			while (*argv[1])
				write(1, argv[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
