/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:22:32 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:22:33 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_checknblignes2(int nb, char *map, int i)
{
	int compteur;

	compteur = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			compteur++;
		i++;
	}
	if (compteur != nb)
		return (0);
	return (1);
}

int		ft_checknblignes(char *map, int i)
{
	int		j;
	char	*nb;

	j = i - 5;
	while (j > 0)
	{
		if (map[j] < '0' || map[j] > '9')
			return (0);
		j--;
	}
	j = i - 5;
	if (!(nb = malloc(sizeof(*nb) * (j + 1))))
		return (0);
	ft_fillstr(nb, j + 1);
	while (j >= 0)
	{
		nb[j] = map[j];
		j--;
	}
	j = ft_atoi(nb);
	if (!ft_checknblignes2(j, map, i))
		return (0);
	free(nb);
	return (1);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}
