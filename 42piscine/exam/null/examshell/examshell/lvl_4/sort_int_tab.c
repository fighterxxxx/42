/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 23:53:43 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/22 23:56:47 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	a;
	int				tmp;

	a = 1;
	if (size != 0)
	{
		while (a <= size)
		{
			if (tab[a] < tab[a - 1])
			{
				tmp = tab[a];
				tab[a] = tab[a - 1];
				tab[a - 1] = tmp;
				a = 0;
			}
			++a;
		}
	}
}

int		main(void)
{
	int		tab[10];
	int		i;

	i = 0;
	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 0;
	tab[6] = 1;
	tab[7] = 7;
	tab[8] = 5;
	tab[9] = 6;
	sort_int_tab(tab, 9);
	while (i <= 9)
		printf("%d\n", tab[i++]);
	return (0);
}
