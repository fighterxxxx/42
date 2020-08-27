/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:08:51 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/24 21:34:04 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_repeat (char c)
{
	int repeat;
	int i;

	i = 0;
	repeat = c - ('a' - 1);
	while (i < repeat)
	{
		ft_putchar(c);
		i++;
	}
}

int main (int argc, char **argv)
{	
	int i;

	i = 0;
	if (argc ==2)
	{
		while (argv[1][i])
		{
			ft_repeat (argv[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
