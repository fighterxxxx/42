/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:20:28 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/19 11:57:15 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int x;
	int	i;

	i = 0;
	while (tab[i])
	{
		x = 0;
		while (tab[x])
		{
			if (tab[x + 1] && (*cmp)(tab[x], tab[x + 1]) > 0)
				ft_swap(&tab[x], &tab[x + 1]);
			x++;
		}
		i++;
	}
}
