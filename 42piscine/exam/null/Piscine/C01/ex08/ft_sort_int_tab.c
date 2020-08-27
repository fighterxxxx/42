/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:14:44 by flmarsil          #+#    #+#             */
/*   Updated: 2019/08/29 16:21:59 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (i < size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[x] > tab[x + 1])
				ft_swap(&tab[x], &tab[x + 1]);
			x++;
		}
		i++;
	}
}
