/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:16:50 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/13 22:37:21 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int value, char *base_to);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

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
