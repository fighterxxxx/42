/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:22:54 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:22:56 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
	{
		ft_stdin();
		return (0);
	}
	else
	{
		while (i < ac)
		{
			if (ft_mapsolution(av[i]) == -1)
				ft_putstr("error\n");
			if (i + 1 != ac)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
