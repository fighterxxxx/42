#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    alpha_mirror(char *str)
{
  while (*str)
  {
    if (*str >= 65 && *str <= 90)
      ft_putchar(90 - (*str - 65));
    else if (*str >= 97 && *str <= 122)
      ft_putchar(122 - (*str - 97));
    else
      ft_putchar(*str);
    str++;
  }
}

int		main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
}