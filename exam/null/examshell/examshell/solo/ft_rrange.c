#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int i;
	int len;
	int *ret;
	
	len = (end - start);
	if (start < 0 && end < 0)
		len = ((start * -1) - (end * -1));
	if (!(ret = (int *)malloc(sizeof(int) * (len + 1))))
		return (NULL);
	i = 0;
	while (start <= end)
	{
		ret[i] = end;
		end--;
		i++;
	}
	return (ret);
}

#include <stdio.h>

int		main()
{
	int *num;
	int i;
	int len;
	int start;
	int end;

	i = 0;
	start = 1;
	end = 3;
	len = (end - start);
	if (start < 0 && end < 0)
		len = ((start * -1) - (end * - 1));
	num = ft_rrange(start, end);
	while (i <= len)
	{
		printf("%d\n", num[i]);
		i++;
	}
	return (0);
}
