int     max(int *tab, unsigned int len)
{
    int             cpy = tab[0];
    unsigned int    i = 0;

    while (i < len)
    {
        if (cpy < tab[i])
            cpy = tab[i];
        ++i;
    }
    if (i == len)
        return (cpy);
    return (0);
}
