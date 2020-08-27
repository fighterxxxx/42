/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:24:38 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/02 17:42:57 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;
	unsigned int j;

	i = 0;
	len = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[len])
		++len;
	if (size <= i)
		len = len + size;
	else
		len = len + i;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
