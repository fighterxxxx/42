#include <unistd.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int		main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	is_power_of_2(ac[1]);
	return(0);
}
