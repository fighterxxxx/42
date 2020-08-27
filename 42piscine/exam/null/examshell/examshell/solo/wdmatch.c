#include <unistd.h>

int		ft_strlen(char *s1)
{
	int i;
	
	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int len;
	
	i = 0;
	len = ft_strlen(s1);
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
