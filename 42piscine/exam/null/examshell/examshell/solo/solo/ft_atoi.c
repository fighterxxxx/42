/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:32:20 by flmarsil          #+#    #+#             */
/*   Updated: 2019/08/30 15:52:11 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int signe;

	i = 0;
	nb = 0;
	signe = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' 
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
			i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * signe);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_atoi("      ----+55846"));
	return (0);
}
