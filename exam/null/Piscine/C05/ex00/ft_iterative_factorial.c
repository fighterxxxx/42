/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:41:33 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/02 19:26:51 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
