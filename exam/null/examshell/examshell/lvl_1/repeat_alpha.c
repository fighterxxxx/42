/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 19:59:07 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/17 20:01:10 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ltr)
{
	write(1, &ltr, 1);
}

void	ft_putnchar(char ltr)
{
	int i;
	int range;

	i = 0;
	if (ltr >= 'a' && ltr <= 'z')
		range = ltr - 'a' + 1;
	else if (ltr >= 'A' && ltr <= 'Z')
		range = ltr - 'A' + 1;
	else
		range = 1;
	while (i < range)
	{
		ft_putchar(ltr);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ft_putnchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
