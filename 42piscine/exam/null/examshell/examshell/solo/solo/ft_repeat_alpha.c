#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}	
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;	
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_repeat_alpha(argv[1]);	
}
