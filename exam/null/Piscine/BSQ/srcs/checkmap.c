/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:22:20 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:22:24 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*ft_checkfirstline(char *carac, char *map, int *i)
{
	int j;

	j = 0;
	while (map[*i] && map[*i] != '\n')
		*i = *i + 1;
	if (map[*i] == '\0' || *i < 4)
		return (NULL);
	if (map[*i - 1] == map[*i - 2] || map[*i - 2] == map[*i - 3] ||
			map[*i - 1] == map[*i - 3])
		return (NULL);
	carac[0] = map[*i - 3];
	carac[1] = map[*i - 2];
	carac[2] = map[*i - 1];
	carac[3] = '\0';
	while (carac[j])
	{
		if (!(carac[j] >= 32 && carac[j] <= 126))
			return (NULL);
		j++;
	}
	if (map[*i] == '\n')
		*i = *i + 1;
	else
		return (NULL);
	return (carac);
}

int		ft_checkcarac(char *carac, char singlecar)
{
	int i;

	i = 0;
	while (carac[i] && i < 2)
	{
		if (singlecar == carac[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_checklines(char *carac, char *map, int *i)
{
	int lenfl;
	int len2;

	lenfl = 0;
	len2 = 0;
	while (map[*i + lenfl] != '\n' && map[*i + lenfl])
		lenfl++;
	while (map[*i])
	{
		while (map[*i + len2] != '\n' && map[*i + len2] != '\0')
		{
			if (!ft_checkcarac(carac, map[*i + len2]))
				return (0);
			len2++;
		}
		if (len2 == lenfl)
		{
			*i = *i + len2;
			len2 = 0;
		}
		else
			return (0);
		*i = *i + 1;
	}
	return (1);
}

int		ft_checkmap(char *carac, char *map)
{
	int i;

	i = 0;
	if (ft_checkfirstline(carac, map, &i) == NULL)
		return (0);
	if (map[i] == '\0' || !ft_checkcarac(carac, map[i]))
		return (0);
	if (!ft_checknblignes(map, i))
		return (0);
	if (!ft_checklines(carac, map, &i))
		return (0);
	return (1);
}

int		ft_caracvalue(char *carac, char singlecar)
{
	int i;

	i = 0;
	while (carac[i] && carac[i] != singlecar)
		i++;
	return (i);
}
