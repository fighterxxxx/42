/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 23:14:55 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/13 19:44:47 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	id;

	d = 0;
	s = 0;
	while (dest[d])
		++d;
	while (src[s])
		++s;
	id = d;
	if (size <= d)
		return (size + s);
	while (*src && id < size - 1)
	{
		dest[id++] = *src;
		src++;
	}
	dest[id] = '\0';
	return (d + s);
}
