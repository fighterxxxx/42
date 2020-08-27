/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 23:47:08 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/26 16:41:48 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int		len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char *str;
	long	n;
	int		i;

	n = nb;
	i = len(n);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

int ft_atoi(char *str)
{
	int i;
	int signe;

	signe = 1;
	i = 0;
	int nb =0;
	while(str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i] + '0');
	return (signe * nb);
}

int     *ft_range(int start, int end)
{
	int *tab;
	int min;
	int dec;
	int i = 0;

	dec = (end - start) + 1;
	if (!(tab = malloc((sizeof (int))*(dec))))
				return(0);
	if (start > end)
		min = end;
	else
		min = start;
	while(tab[i])
	{
		tab[i] = min;
		i++;
		min ++;
	}
	return (tab);
}


int main (int argc, char **argv)
{
	int start;
	int end;
	int *tab;
	int i;

	i = 0;
	if (argc == 3)
	{
		start = ft_atoi(argv[1]);
		end = ft_atoi(argv[2]);
		tab = ft_range(start, end);
		while (tab[i])
		{
			write (1, ft_itoa(tab[i]), 1);
			i++;
		}
	}

}




