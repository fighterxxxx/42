/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makegrid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:23:09 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:23:11 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_nblicol(char *map, int *lines, int *columns, int i)
{
	*columns = 0;
	*lines = 0;
	while (map[i + *columns] != '\n' && map[i + *columns])
		*columns += 1;
	i += *columns;
	while (map[i])
	{
		if (map[i] == '\n')
			*lines += 1;
		i++;
	}
}

int		**ft_mallocgrid(int *lines, int *columns)
{
	int i;
	int **grid;

	i = 0;
	grid = NULL;
	if (!(grid = malloc(sizeof(*grid) * (*lines + 1))))
		return (NULL);
	grid[*lines] = NULL;
	while (i < *lines)
	{
		if (!(grid[i] = malloc(sizeof(**grid) * (*columns))))
			return (NULL);
		i++;
	}
	return (grid);
}

void	ft_fillgrid(int **grid, char *carac, char *map, int *columns)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (map[i] != '\n')
		i++;
	i++;
	while (grid[j] != NULL)
	{
		k = 0;
		while (k < *columns)
			grid[j][k++] = ft_caracvalue(carac, map[i++]);
		i++;
		j++;
	}
}

int		**ft_makegrid(char *carac, char *map, int *lines, int *columns)
{
	int i;
	int **grid;

	i = 0;
	grid = NULL;
	while (map[i] != '\n')
		i++;
	i++;
	ft_nblicol(map, lines, columns, i);
	if ((grid = ft_mallocgrid(lines, columns)) == NULL)
		return (NULL);
	ft_fillgrid(grid, carac, map, columns);
	return (grid);
}

void	ft_fillgridzero(int **grid, int columns)
{
	int i;
	int j;

	i = 0;
	while (grid[i] != NULL)
	{
		j = 0;
		while (j < columns)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
