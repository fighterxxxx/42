
char    *ft_strrev(char *str)
{
    int	    i;
    int     length;
    char    tmp;

    i = 0;
    while (str[i])
    	i++;
    length = i;
    i =	0;
    while (length / 2 > i)
    {
    	tmp = str[length - 1];
    	str[length - 1] = str[i];
    	str[i] = tmp;
	i++;
    	length = length	- 1;
    }
    return (str);
}
