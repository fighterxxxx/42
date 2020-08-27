/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 10:10:42 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/17 14:54:30 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *res;

	i = 0;
	if (!(res = (int *)malloc(sizeof(int) * lenght)))
		return (0);
	while (i < lenght)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
