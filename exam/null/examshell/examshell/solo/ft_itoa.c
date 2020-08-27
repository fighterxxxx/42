#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char            *ft_itoa(int n)
{
    int     tmp;
    int     len;
    char    *tab;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    len = (n < 0) ? 2 : 1;
	tmp = (n < 0) ? -n : n;
    while (tmp /= 10)
        len++;
    tmp = (n < 0) ? -n : n;
    if (!(tab = (char*)malloc(sizeof(char) * len + 1)))
        return (NULL);
    if (n < 0)
		tab[0] = '-';
	tab[len] = '\0';
    while (len--)
    {
        tab[len] = n % 10 + '0';
        n /= 10;
    }
    return (tab);
}

#include <stdio.h>

int main()
{
    printf("%s", ft_itoa(-2147483648));
    return (0);    
}

/** char	*ft_itoa_base(int value, char *base_to)
{
	char			*tab;
	int				cpt;
	unsigned int	tmp;
	unsigned int	base_len;

	base_len = ft_strlen(base_to);
	cpt = (value < 0) ? 2 : 1;
	tmp = (value < 0) ? -value : value;
	while (tmp >= base_len && (tmp /= base_len))
		++cpt;
	tmp = (value < 0) ? -value : value;
	if (!(tab = (char *)malloc(sizeof(char) * cpt + 1)))
		return (NULL);
	if (value < 0)
		tab[0] = '-';
	tab[cpt] = '\0';
	while (tmp >= base_len)
	{
		--cpt;
		tab[cpt] = base_to[tmp % base_len];
		tmp /= base_len;
	}
	tab[--cpt] = base_to[tmp % base_len];
	return (tab);
}**/