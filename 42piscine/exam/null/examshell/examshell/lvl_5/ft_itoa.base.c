#include "libft.h"
char*ft_itoa_base(int nbr, int base)
{
	char	base_digits[16] = "0123456789ABCDEF";
	int		converted_number[64];
	int		i;
	int		n;
	char	*result;

	i = 0;
	n = nbr;
	nbr = (nbr < 0) ? nbr * -1 : nbr;
	while (nbr != 0)
	{
		converted_number[i] = nbr % base;
		nbr = nbr / base;
		i++;
	}
	if (!(result = (char *)malloc(--i)))
		return (NULL);
	result[0] = (n < 0) ? '-' : 0;
	n = n < 0 ? 1 : 0;
	while (i >= 0)
		result[n++] = base_digits[converted_number[i--]];
	return (result);
}
