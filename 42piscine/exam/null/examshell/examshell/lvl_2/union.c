
#include <unistd.h>

void    ft_union(char *s1, char *s2)
{
    char     tab[256];
    int     i = 0;

    while (s1[i])
    {
        if (tab[s1[i]] == 0)
        {
            tab[s1[i]] = 1;
            write(1, &s1[i], 1);
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (tab[s2[i]] == 0)
        {
            tab[s2[i]] = 1;
            write(1, &s2[i], 1);
        }
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}
