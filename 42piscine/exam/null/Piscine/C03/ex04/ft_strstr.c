/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 16:58:36 by flmarsil          #+#    #+#             */
/*   Updated: 2019/08/29 17:24:11 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int p;

	i = 0;
	p = 0;
	if (to_find[0] == '\0')
		return (str);
	if (to_find[0] != '\0' && str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			p = 0;
			while (str[i + p] == to_find[p])
			{
				if (to_find[p + 1] == '\0')
					return (&str[i]);
				else if (str[i + p] != to_find[p])
					break ;
				p++;
			}
			i++;
		}
	}
	return (0);
}
