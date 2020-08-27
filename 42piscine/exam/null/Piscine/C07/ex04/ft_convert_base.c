/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:33:01 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/13 22:37:19 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *base);
int		ft_is_number(char c, char *base);

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

char	*ft_itoa_base(int value, char *base_to)
{
	char			*tab;
	int				cpt;
	unsigned int	tmp;
	unsigned int	base_len;

	base_len = ft_strlen(base_to);
	cpt = (value < 0) ? 2 : 1;
	tmp = (value < 0) ? -value : value;
	while (tmp >= base_len && (tmp /= base_len))
		++cpt;
	tmp = (value < 0) ? -value : value;
	if (!(tab = (char *)malloc(sizeof(char) * cpt + 1)))
		return (NULL);
	if (value < 0)
		tab[0] = '-';
	tab[cpt] = '\0';
	while (tmp >= base_len)
	{
		--cpt;
		tab[cpt] = base_to[tmp % base_len];
		tmp /= base_len;
	}
	tab[--cpt] = base_to[tmp % base_len];
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*string;
	int		nb;

	if ((nbr) && (base_from) && (base_to))
	{
		if (ft_check_base(base_from) == 1 && ft_check_base(base_to) == 1)
		{
			nb = ft_atoi_base(nbr, base_from);
			string = ft_itoa_base(nb, base_to);
			return (string);
		}
	}
	return (NULL);
}
