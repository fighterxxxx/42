/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 12:04:03 by momahtal          #+#    #+#             */
/*   Updated: 2020/08/15 12:04:16 by momahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int		**pov;
	int		board[5][5];

	if (argc == 2)
	{
		if (!check_pov(argv[1]))
		{
			ft_putstr("Error\n");
			return (0);
		}
		pov = get_pov(argv[1]);
		fill_empty_board(board);
		recursive_towers(board, 1, 1, pov);
		print_board(board);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
