#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		i;
	int		len;
	int		*ret;

	i = 0;
	len = (end - start);
	if (start < 0 && end < 0)
		len = ((start * -1) - (end * -1));
	if (!(ret = (int *)malloc(sizeof(int) * len + 1)))
		return (NULL);
	while (start <= end)
	{
		ret[i] = start;
		start++;
		i++;
	}
	return (ret);
}
