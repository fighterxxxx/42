/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:42:15 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/15 12:37:15 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '\t' || base[i] == '\v' || base[i] == '\n'
				|| base[i] == '\r' || base[i] == '\f' || base[i] == ' ')
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_is_number(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				nb;
	int				sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (ft_check_base(base) == 1)
	{
		while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = sign * (-1);
			i++;
		}
		while (ft_is_number(str[i], base))
		{
			nb = nb * ft_strlen(base) + ft_is_number(str[i], base) - 1;
			i++;
		}
	}
	return (nb * sign);
}

#include <stdio.h>

int		main()
{
	printf("%d", ft_atoi_base("25689", "0123456789abcdef"));
	return (0);
}
