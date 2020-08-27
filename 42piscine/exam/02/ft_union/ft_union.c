/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:54:23 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/26 00:42:08 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc,char **argv)
{
	if(argc == 3)
	{
		int i;
		int len;

		i = 0;
		while (argv[1][i])
		{
			if (check(argv[1], argv[1][i], i))
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		len = i;
		i = 0;
		while (argv[2][i])
		{
			 if (check(argv[2], argv[2][i], i))
			 {
				if (check(argv[1], argv[2][i], len))
				{
					write(1, &argv[2][i], 1);
				}
			 }
			 i++;
		}
	}
}
