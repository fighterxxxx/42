/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:29:14 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/10 12:09:45 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"

int		*ft_extract(char *list)
{
	int i;
	int j;
	int *tab;

	tab = (int *)malloc(4 * 16);
	if (tab == 0)
		return (0);
	i = 0;
	j = 0;
	if (list[0] == ' ')
		return (0);
	while (list[i] != '\0')
	{
		if (list[i] == ' ')
			i++;
		if (list[i + 1] != 0 && list[i + 1] != ' ')
			return (0);
		if (!('1' <= list[i] && list[i] <= '4'))
			return (0);
		tab[j] = list[i] - '0';
		j++;
		i++;
	}
	if (j != 16)
		return (0);
	return (tab);
}

int		**setup(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	c;

	c = 0;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			c = grid[j][i] + '0';
			write(1, &c, 1);
			if (i != 3)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int		**ft_malloc(void)
{
	int i;
	int **grid;

	i = 0;
	grid = malloc(4 * sizeof(int*));
	while (i++ < 4)
		grid[i - 1] = malloc(4 * sizeof(int));
	if (grid == 0)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	return (grid);
}

int		main(int argc, char **argv)
{
	int *tab;
	int **grid;
	int i;

	i = 0;
	if (argc != 2 || (tab = ft_extract(argv[1])) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!(grid = ft_malloc()))
		return (0);
	setup(grid);
	if (!finder(grid, tab, 0, 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(grid);
	while (i < 4)
		free(grid[i++]);
	free(grid);
	free(tab);
}
