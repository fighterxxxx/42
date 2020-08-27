/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:05:17 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/12 15:38:14 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int size;

	i = 0;
	tab = NULL;
	size = (max - min);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * size)))
		return (-1);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
