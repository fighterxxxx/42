char	*ft_strstr(char *big, char *little)
{
	char *a;
	char *b;

	if (*little == '\0')
		return (big);
	while (*big)
	{
		a = big;
		b = little;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (big);
		big++;
	}
	return (0);
}
