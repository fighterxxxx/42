#include <stdlib.h>
#include <unistd.h>

char    *ft_strdup(char *src)
{
    int     i;
    int     length;
    char    *dup;

    i = 0;
    if (!src)
        return (NULL);
    while (src[i])
        i++;
    length = i + 1;
    i =	0;
    if ((dup = ((char *)malloc(length))))
    {
        while (i <= length)
        {
            dup[i] = src[i];
            i++;
        }
        return (dup);
    }
    else
        return (NULL);
}