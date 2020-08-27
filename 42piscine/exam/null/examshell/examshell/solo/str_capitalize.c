#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		tolower(char c)
{
	return ((c -= (c >= 'A' && c <= 'Z') ? 32 : 0));
}

int		toupper(char c)
{
	return ((c += (c >= 'a' && c <= 'z') ? 32 : 0));
}

void	str_capitalize(char *s)
{
		while (*s)
		{	
			while(isblank(*s))
				ft_putchar(*s++);
			if (*s && !isblank(*s))
				ft_putchar(toupper(*s++);
			while (*s && !isblank(*s))
				ft_putchar(tolower(*s++));
		}
}
