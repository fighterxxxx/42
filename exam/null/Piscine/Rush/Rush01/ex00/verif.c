/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:58:46 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/07 17:26:18 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		left(int **grid, int *tab, int j)
{
	int max;
	int x;
	int l;

	x = 0;
	max = 0;
	l = 0;
	while (l < 4)
	{
		if (x < grid[j][l] && grid[j][l] > max)
		{
			x++;
			max = grid[j][l];
		}
		l++;
	}
	if (x == tab[8 + j % 4])
		return (1);
	return (0);
}

int		right(int **grid, int *tab, int j)
{
	int max;
	int x;
	int l;

	x = 0;
	max = 0;
	l = 3;
	while (l > -1)
	{
		if (x < grid[j][l] && grid[j][l] > max)
		{
			x++;
			max = grid[j][l];
		}
		l--;
	}
	if (x == tab[12 + j % 4])
		return (1);
	return (0);
}

int		top(int **grid, int *tab, int i)
{
	int max;
	int x;
	int l;

	max = 0;
	x = 0;
	l = 0;
	while (l < 4)
	{
		if (x < grid[l][i] && grid[l][i] > max)
		{
			x++;
			max = grid[l][i];
		}
		l++;
	}
	if (x == tab[0 + i % 4])
		return (1);
	return (0);
}

int		down(int **grid, int *tab, int i)
{
	int max;
	int x;
	int l;

	x = 0;
	max = 0;
	l = 3;
	while (l > -1)
	{
		if (x < grid[l][i] && grid[l][i] > max)
		{
			x++;
			max = grid[l][i];
		}
		l--;
	}
	if (x == tab[4 + i % 4])
		return (1);
	return (0);
}
