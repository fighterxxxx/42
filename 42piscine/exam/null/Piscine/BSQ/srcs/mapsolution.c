/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapsolution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:23:20 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:23:22 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_mapsolution(char *av)
{
	int		fd;
	char	*map;
	char	carac[4];
	int		**grid;
	int		checkread;

	fd = 0;
	map = NULL;
	grid = NULL;
	checkread = 1;
	if ((fd = open(av, O_RDONLY)) == -1)
		return (-1);
	if ((map = ft_readmaps(fd, checkread)) == NULL)
	{
		ft_putstr("map error\n");
		return (-2);
	}
	if (!ft_checkmap(carac, map))
	{
		ft_putstr("map error\n");
		return (-2);
	}
	if (ft_mapsolution2(grid, map, carac) == -1)
		return (-1);
	return (0);
}

int		ft_stdin(void)
{
	int		fd;
	char	*map;
	char	carac[4];
	int		**grid;
	int		checkread;

	fd = 0;
	map = NULL;
	grid = NULL;
	checkread = 1;
	if ((map = ft_readmaps(fd, checkread)) == NULL)
	{
		ft_putstr("map error\n");
		return (-2);
	}
	if (!ft_checkmap(carac, map))
	{
		ft_putstr("map error\n");
		return (-2);
	}
	if (ft_mapsolution2(grid, map, carac) == -1)
		return (-1);
	return (0);
}

int		ft_mapsolution2(int **grid, char *map, char *carac)
{
	int		**cache;
	char	**print;
	int		lines;
	int		columns;
	t_pres	res;

	res.i = 0;
	res.j = 0;
	res.maxsquare = 0;
	lines = 0;
	columns = 0;
	grid = ft_makegrid(carac, map, &lines, &columns);
	ft_revgrid(grid, columns);
	if ((cache = ft_mallocgrid(&lines, &columns)) == NULL)
		return (-1);
	ft_fillgridzero(cache, columns);
	ft_findmax(grid, cache, columns, &res);
	ft_fillrep(grid, res);
	print = ft_mallocchargrid(lines, columns);
	ft_trgrid(print, grid, carac, columns);
	ft_printres(print, columns);
	ft_mapsolution3(grid, cache, print);
	return (0);
}

void	ft_mapsolution3(int **grid, int **cache, char **print)
{
	int i;

	i = 0;
	while (grid[i] != NULL)
	{
		free(grid[i]);
		free(cache[i]);
		free(print[i]);
		i++;
	}
	free(grid);
	free(cache);
	free(print);
}
