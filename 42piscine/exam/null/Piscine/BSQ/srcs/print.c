/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:23:41 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:23:43 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	ft_transcarac(char *carac, int value)
{
	if (value == 1)
		value = 0;
	else if (value == 0)
		value = 1;
	return (carac[value]);
}

void	ft_trgrid(char **print, int **grid, char *carac, int columns)
{
	int i;
	int j;

	i = 0;
	while (grid[i] != NULL)
	{
		j = 0;
		while (j < columns)
		{
			print[i][j] = ft_transcarac(carac, grid[i][j]);
			j++;
		}
		i++;
	}
}

char	**ft_mallocchargrid(int lines, int columns)
{
	int		i;
	char	**print;

	i = 0;
	print = NULL;
	if (!(print = malloc(sizeof(*print) * (lines + 1))))
		return (NULL);
	print[lines] = NULL;
	while (i < lines)
	{
		if (!(print[i] = malloc(sizeof(**print) * (columns + 1))))
			return (NULL);
		print[i][columns] = '\0';
		i++;
	}
	return (print);
}

void	ft_printres(char **print, int columns)
{
	int i;
	int j;

	i = 0;
	while (print[i] != NULL)
	{
		j = 0;
		while (j < columns)
		{
			ft_putchar(print[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
