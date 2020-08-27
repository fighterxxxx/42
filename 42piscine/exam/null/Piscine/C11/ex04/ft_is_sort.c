/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:23:55 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/19 14:55:08 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	n;

	i = -1;
	n = 1;
	while (n && ++i < length)
	{
		j = i;
		while (n && ++j < length)
			n = ((f(tab[i], tab[j])) <= 0) ? n : 0;
	}
	if (n)
		return (n);
	++n;
	i = -1;
	while (n && ++i < length)
	{
		j = i;
		while (n && ++j < length)
			n = ((f(tab[i], tab[j])) >= 0) ? n : 0;
	}
	return ((n > 0));
}
