/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:36:31 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/03 20:50:23 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	conv_hexa(int n)
{
	if (n <= 31)
	{
		write(1, "\\", 1);
		write(1, "0", 1);
	}
	if (n >= 16)
		conv_hexa(n / 16);
	n = n % 16;
	if (n < 10)
		n = n + '0';
	else
		n = n + 'a' - 10;
	write(1, &n, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32)
		{
		write(1, &str[i], 1);
		i++;
		}
		else if (str[i] <= 31)
		{
			conv_hexa((int)str[i]);
			i++;
		}
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\n\t\v\r\ftu vas bien ?");
}
