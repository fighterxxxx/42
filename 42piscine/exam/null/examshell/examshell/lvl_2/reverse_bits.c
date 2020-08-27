/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 19:56:04 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/18 19:56:23 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				count;

	res = 0;
	count = 8;
	while (count)
	{
		res = res * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		count--;
	}
	return (res);
}
