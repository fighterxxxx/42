#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
    	i--;
        while (i >= 0)
        {
            ft_putchar(av[1][i]);
            i--;
        }
    }
    ft_putchar('\n');
}
