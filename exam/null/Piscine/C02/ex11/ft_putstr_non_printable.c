/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 21:47:52 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/01 15:11:02 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char c, char *base)
{
	if (c >= 0 && c <= 16)
		ft_putchar(base[c - 0]);
	else
	{
		ft_print(c / 16, "0123456789abcdef");
		ft_print(c % 16, "0123456789abcdef");
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			if (str[i] >= 0 && str[i] <= 15)
				ft_putchar('0');
			ft_print(str[i], "0123456789abcdef");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
