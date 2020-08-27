int     count_word(char *str)
{
    int     count;
    
    count = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str =! ' ' && *str != '\n' && *str != '\t'))
        {
            count++;
            while (*str && *str =! ' ' && *str != '\n' && *str != '\t'))
            str++;
        }
    }
    return (count);
}

char    *malloc_word(char *str)
{
    char *word;
    int i;

    i = 0;
    while (str[i] && str[i] =! ' ' && str[i] != '\n' && str[i] != '\t'))
        i++;
    if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while (str[i] && str[i] =! ' ' && str[i] != '\n' && str[i] != '\t'))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    int i;
    int word;
    char **tab;

    word = count_word(str);
    if(!(tab = (char *)malloc(sizeof(char) * word + 1)))
        return (NULL);
    i = 0;
     while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str =! ' ' && *str != '\n' && *str != '\t'))
        {
            tab[i] = malloc_word(str);
            i++;
            while (*str && *str =! ' ' && *str != '\n' && *str != '\t'))
            str++;
        }
    }
    tab[i] = NULL;
    return (tab); 
}