/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:23:31 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:23:33 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*ft_realloc(char *map, char *tmp, int len, char *lect)
{
	if (!(map = malloc(sizeof(*map) * (len + 1))))
		return (NULL);
	ft_fillstr(map, len + 1);
	if (tmp != NULL)
	{
		ft_strcpy(map, tmp);
		free(tmp);
		tmp = NULL;
	}
	ft_strcat(map, lect);
	return (map);
}

int		ft_checkread(int *checkread, char *lect)
{
	*checkread = 0;
	if (lect[0] < '0' || lect[0] > '9')
		return (0);
	return (1);
}

char	*ft_readmaps(int fd, int checkread)
{
	char	*map;
	char	*tmp;
	char	lect[BUFFSIZE + 1];
	int		i;
	int		len;

	map = NULL;
	lect[BUFFSIZE] = '\0';
	i = 1;
	len = 0;
	while (i)
	{
		ft_fillstr(lect, BUFFSIZE + 1);
		i = read(fd, lect, BUFFSIZE);
		if (checkread)
			if (!ft_checkread(&checkread, lect))
				return (NULL);
		len += i;
		tmp = map;
		if (i > 0)
			if (!(map = ft_realloc(map, tmp, len, lect)))
				return (NULL);
	}
	return (map);
}
