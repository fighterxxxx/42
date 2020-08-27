/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsquare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:22:44 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:22:46 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_revgrid(int **grid, int columns)
{
	int i;
	int j;

	i = 0;
	while (grid[i] != NULL)
	{
		j = 0;
		while (j < columns)
		{
			if (grid[i][j] == 0)
				grid[i][j] = 1;
			else
				grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		ft_min(int **cache, int i, int j)
{
	int temp;

	temp = cache[i - 1][j];
	if (temp > cache[i][j - 1])
		temp = cache[i][j - 1];
	if (temp > cache[i - 1][j - 1])
		temp = cache[i - 1][j - 1];
	return (temp);
}

void	ft_findmax(int **grid, int **cache, int columns, t_pres *res)
{
	int i;
	int j;

	i = 0;
	while (grid[i] != NULL)
	{
		j = -1;
		while (++j < columns)
		{
			if (i == 0 || j == 0)
				cache[i][j] = grid[i][j];
			else if (grid[i][j] == 0)
				cache[i][j] = 0;
			else
				cache[i][j] = 1 + ft_min(cache, i, j);
			if (cache[i][j] > res->maxsquare)
			{
				res->i = i;
				res->j = j;
				res->maxsquare = cache[i][j];
			}
		}
		i++;
	}
}

void	ft_fillrep(int **grid, t_pres res)
{
	int i;
	int j;
	int tmpi;
	int tmpj;

	i = res.i;
	j = res.j;
	tmpi = i - res.maxsquare;
	tmpj = j - res.maxsquare;
	while (i > tmpi)
	{
		j = res.j;
		while (j > tmpj)
		{
			grid[i][j] = 2;
			j--;
		}
		i--;
	}
}
