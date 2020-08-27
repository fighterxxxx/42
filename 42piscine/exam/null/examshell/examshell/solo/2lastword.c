#include <stdio.h>
#include <stdlib.h>

char    itoa(int n)
{
    int tmp;
    int len;
    char *tab;
    
    if (n == -2147483648)
        return (ft_strdup("-2147483648"))
    tmp = (n < 0) ? -n : n;
    len = (n < 0) ? 2 : 1;
    while (tmp /= 10)
        len++;
    tmp = (n < 0) ? -n : n;
    if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
        return (NULL);
    if (n < 0)
        tab[0] = '-';
    tab[len] = '\0';
    while (len--)
    {
        tab[len]= n %  10 + '0';
        n /= 10;
    }
    return (tab);
}