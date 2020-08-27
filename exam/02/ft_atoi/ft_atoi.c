/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:26:37 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/20 13:39:19 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int signe;
	int n;

	signe = 0;
	n = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r'
				|| str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	if (signe % 2 != 0)
		return (-n);
	return (n);
}





int ft_atoi(char *str)
{
	int i;
	int signe;
	int n;

	signe = 0;

	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || 
			|| str[i] == '\f' ||str[i] == ' ' )
		i++;
	while (str[i] == '+' || str[i] == '-' )
	{
			if (str[i] == '-')
				signe ++;
			i++;
	}
	while (str[i] >= 'a' && str[i] <= 'z')
		n = n*10 +str[i++] -'0';
	if (signe % 2 != 0)
		return(-n);
	return(n);
}
