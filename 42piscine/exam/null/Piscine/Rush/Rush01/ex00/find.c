/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:21:52 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/07 17:48:03 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		comp(int **grid, int i, int j, int k)
{
	int l;

	l = 0;
	while (l < 4)
	{
		if (grid[j][l] == k)
			return (0);
		l++;
	}
	l = 0;
	while (l < 4)
	{
		if (grid[l][i] == k)
			return (0);
		l++;
	}
	return (1);
}

int		final_test(int **grid, int *tab)
{
	int x;

	x = 0;
	while (x < 4)
	{
		if (!left(grid, tab, x) || !right(grid, tab, x)
				|| !top(grid, tab, x) || !down(grid, tab, x))
			return (0);
		x++;
	}
	return (1);
}

int		finder(int **grid, int *tab, int i, int j)
{
	int k;
	int good;

	good = 0;
	k = 1;
	while (k < 5)
	{
		if (comp(grid, i, j, k))
		{
			grid[j][i] = k;
			if (i == 3 && j != 3)
				good = finder(grid, tab, 0, j + 1);
			else if (i < 3)
				good = finder(grid, tab, i + 1, j);
			else if (j == 3 && i == 3 && !final_test(grid, tab))
				break ;
			else
				return (1);
			if (good)
				return (good);
		}
		k++;
	}
	grid[j][i] = 0;
	return (0);
}
