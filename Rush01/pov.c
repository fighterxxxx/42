/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 12:04:41 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/15 12:04:45 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_pov(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str <= '4' && *str >= '1')
			i++;
		str++;
	}
	if (i != 16)
		return (0);
	return (1);
}

int		**get_pov(char *str)
{
	int		**pov;
	int		i;
	int		j;

	i = 1;
	j = 1;
	pov = malloc(sizeof(int) * 9);
	while (*str)
	{
		if (i == 1)
			pov[j] = malloc(sizeof(int) * 9);
		if (*str <= '4' && *str >= '1')
		{
			pov[j][i] = *str - 48;
			i++;
		}
		if (i == 5)
		{
			i = 1;
			j++;
		}
		str++;
	}
	return (pov);
}
