/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:17:51 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/19 12:01:01 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < lenght)
	{
		if ((*f)(tab[i]))
			++count;
		i++;
	}
	return (count);
}
