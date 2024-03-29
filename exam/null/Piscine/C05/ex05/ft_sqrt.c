/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:04:26 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/03 19:31:12 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long	i;
	long	num;

	i = 1;
	num = nb;
	if (num < 0)
		return (0);
	while (i * i < num)
		i++;
	if (i * i == num)
		return (i);
	return (0);
}
