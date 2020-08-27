#include <stdlib.h>
#include <stdio.h>

int     count_word(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str != ' ' && *str != '\n' && *str != '\t')
        {
            count++;
            while (*str && *str != ' ' && *str != '\n' && *str != '\t')
                str++;
        }
    }
    return (count);
}

char    *malloc_words(char *str)
{
    int i;
    char *words;

    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        i++;
    if (!(words = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
    {
        words[i] = str[i];
        i++;
    }
    words[i] = '\0';
    return (words);
}

char    **ft_split(char *str)
{
    char **tab;
    int words;
    int i;

    words = count_word(str);
    if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
        return (NULL);
    i = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str != ' ' && *str != '\n' && *str != '\t')
        {
            tab[i] = malloc_words(str);
            i++;
            while (*str && *str != ' ' && *str != '\n' && *str != '\t')
                str++;
        }
    }
    tab[i] = NULL;
    return (tab);
}

/**int     main(int ac, char **av)
{
	int     i;
	char	**tab;

    (void)ac;
	i = -1;
	tab = ft_split(av[1]);
	while (tab[++i])
	printf("%s\n", tab[i]);
	return (0);
}**/