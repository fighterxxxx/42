/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:21:14 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/04 15:06:57 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;
	unsigned int nb;

	len = 0;
	nb = nbr;
	if (ft_check_base(base) == 1)
	{
		while (base[len])
			len++;
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = nbr * (-1);
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
		}
		ft_putchar(base[nb % len]);
	}
}
