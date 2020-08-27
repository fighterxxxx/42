/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:59:08 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/05 09:06:05 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	if ((str[i] <= 'A' && str[i] >= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		return (0);
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = sign * (-1);
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10 + str[i] - '0';
			i++;
		}
	}
	return (nb * sign);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc == 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		if ((x > 0) && (y > 0))
			rush(x, y);
		else if ((x < 0) || (y < 0))
			ft_putstr("Error\n");
	}
	return (0);
}
