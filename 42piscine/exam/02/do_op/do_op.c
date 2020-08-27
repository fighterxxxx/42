/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:45:38 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/27 15:45:42 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		if (argv[2] == '+')
			ft_addition(first, second);
		else if (argv[2] == '-')
			ft_soustraction(first, second);
		else if (argv[2] == '*')
			ft_multiplication(first, second);



	}
}
