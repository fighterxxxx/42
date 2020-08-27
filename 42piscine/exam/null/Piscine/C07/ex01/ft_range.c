/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:38:04 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/12 17:51:56 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	size = (max - min);
	tab = NULL;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * size)))
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
