/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:30:27 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/13 23:13:25 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen2(int size, char **strs)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	return (j);
}

char	*ft_cpy(int size, char **strs, char *sep, char *tab)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = -1;
	j = 0;
	while (++i < size)
	{
		k = 0;
		while (strs[i][k])
			tab[j++] = strs[i][k++];
		l = 0;
		while (sep[l] && i != size - 1)
			tab[j++] = sep[l++];
	}
	tab[j] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *tab;

	tab = NULL;
	if (size == 0)
	{
		if (!(tab = malloc(sizeof(char))))
			return (0);
		tab[0] = '\0';
		return (tab);
	}
	if (!(tab = malloc(sizeof(char) * (ft_strlen(sep) * (size - 1)
						+ ft_strlen2(size, strs) + 1))))
		return (0);
	tab = ft_cpy(size, strs, sep, tab);
	return (tab);
}
